import sys
e=5
N=5

def make_P(x, y):
    P=[]
    c=1
    for i in y:
        P = P + [x.index(i)]
    return P

def occu(i ,Q):
    c=0
    for k in Q:
        if k<i:
            c=c+1
    return c

def mult_P(P, Q):
    q=[]
    p=[]
    dic_q=dict(enumerate(sorted(Q)))
    for i in Q:
        oc = occu(i, Q)
        q = q + [oc]
    index=0
    for i in Q:
        p = p + [P[q[index]]]
        index=index+1
    return p


x = raw_input("Type a string : ")
x=x.lower()

if ' ' in x:
    print 'Invalid Input'
    exit
else:
    x=x.strip()

l = len(x)


if l!=N or l!=len(set(x)):
    print 'Invalid Input'
    exit

y = sorted(x)

P = list(x)
Q=P

print Q
for i in range(0,e-1):
    Q=mult_P(P, Q)
    print Q

