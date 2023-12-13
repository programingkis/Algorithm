N = int(input())
nlist = {}

for i in range(N):
    a,b = map(str,input().split())
    
    if b=='enter':
        nlist[a] = b
    else:
        del nlist[a]

nlist = sorted(nlist.keys(), reverse=True)

for i in nlist:
    print(i)
