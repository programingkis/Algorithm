cnt = 0
cnt1 = 0
A, B = map(int, input().split())
alist = {}
blist = {}
a = input()
a = a.split()
for i in range(A):
    alist[a[i]] = a[i]

b = input()
b = b.split()
for i in range(B):
    blist[b[i]] = int(b[i])

for i in a:
    if i in blist:
        True
    else:
        cnt += 1

for i in b:
    if i in alist:
        True
    else:
        cnt1 += 1

print(cnt + cnt1)
