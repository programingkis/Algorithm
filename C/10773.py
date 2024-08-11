import sys

input = sys.stdin.readline

N = int(input())
num = 0
stack =[]


for i in range(N):
    a = int(input())
    if a == 0:
        stack.pop()
    else:
        stack.append(a)

for i in range(len(stack)):
    num += stack[i]
print(num)
