import sys
input = sys.stdin.readline
N,M = map(int, input().split())
arr = {}
arr1 = {}
for i in range(1,N+1):
    a = input().strip()
    arr[i] = a
    arr1[a] = i

for _ in range(M):
    a = input().strip()
    if a.isdigit():
        print(arr[int(a)])
    else:
        print(arr1[a])
    
