import sys

input = sys.stdin.readline

N = int(input())

for i in range(N):
    cnt = 0
    k=0
    a = list(input())
    for j in range(len(a)-1):
        if cnt == 0 and a[j] ==')':
            print('NO')
            k = 1
            break
        else:
            if a[j] == '(':
                cnt +=1
            else:
                cnt -=1
    if k == 0:            
        if cnt == 0:
            print('YES')
        else:
            print('NO')
