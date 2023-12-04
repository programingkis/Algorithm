N = int(input())
list1 = list(map(str,input().split()))
set_data = set(list1)
set_data = list(map(int, set_data))
set_data.sort()
set_data = {set_data[i] : i for i in range(len(set_data))}

list1 = list(map(int, list1))


for i in list1:
    print(set_data[i])
