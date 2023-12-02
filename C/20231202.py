N = int(input())
x=[]
for i in range(N):
    a,b = map(int,input().split())
    x.append([b,a])

x.sort()
for i in x:
    print(i[1],i[0])
