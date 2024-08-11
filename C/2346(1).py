N = int(input())

a = input().split()
balloon = list(map(int,a))
b = list(map(int,a))

key = 0
value = balloon[key]
print(1,end=' ')
balloon[key] = 0
for i in range(N-1):
    if value > 0:
        cnt = 0
        while cnt <value:
            a = key +1
            if a>N-1:
                a =0
            if balloon[a] ==0:
                key = key + 1
            if balloon[a] != 0:
                key = key + 1
                cnt = cnt+1
            if key>N-1:
                key =0
        print(key + 1,end=' ')
        value = balloon[key]
        balloon[key] = 0
    else:
        cnt = 0
        while cnt>value:
            if balloon[key-1] ==0:
                key = key -1
            else:
                key = key -1
                cnt = cnt -1
            if key<0:
                key = N-1
        print(key+1,end=' ')
        value = balloon[key]
        balloon[key] = 0

        
