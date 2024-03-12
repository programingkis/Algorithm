N,M= map(int,input().split())

hlist = set()
slist = set()
plist = []
for i in range(N):
    hlist.add(input())

for i in range(M):
    slist.add(input())
    
for i in hlist :
    if i in slist :
        plist.append(i)

plist.sort()
print(len(plist))
for i in plist:
    print(i)
