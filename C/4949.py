import sys
import re

input = sys.stdin.readline

while True:
    cnt1=0
    a = input()
    a = a.replace('\n','')
    if a == '.':
        break
    a = re.sub(r"[a-zA-Z]","",a)
    a = a.replace(' ','')

    k = len(a)
    for i in range(k):
        cnt = len(a)
        a = a.replace('()','')
        a = a.replace('[]','')
        cnt1 = len(a)
        if cnt == cnt1:
            break
        
    if len(a) == 1:
        print('yes')
    else:
        print('no')
