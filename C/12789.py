N = int(input())

k =1
i = 0
num1 = [0]

num = input()
num = num.split()
num = list(map(int,num))

while i<N:
    if num[i] == k:
        k +=1
        i +=1
    elif num1[-1] == k:
        k +=1
        num1.pop(-1)
        i-=1
        i+=1
    else:
        num1.append(num[i])
        i+=1

a = len(num1)-1
for i in range(a):
    if num1[-1] == k:
        k = num1[-1]
        num1.pop(-1)
        k+=1
    else:
        break

if len(num1) == 1:
    print('Nice')
else:
    print('Sad')
