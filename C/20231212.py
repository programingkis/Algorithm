N, M = map(int, input().split())

arr1=[]
count =0
for i in range(N):
    arr1.append(input())
arr1 = set(arr1)
for i in range(M):
    arr2 = input()
    if arr2 in arr1:
        count+=1



print(count)
