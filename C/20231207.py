new = []
M = int(input())

a = set(map(int,input().split()))

N = int(input())

b = list(map(int,input().split()))

for i in range(N):
    if b[i] in a:
        print(1,end = ' ')
    else:
        print(0,end = ' ')
