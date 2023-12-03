member_list = []
N = int(input())

for i in range(N):
    a,b = input().split()
    member_list.append([int(a),b])

member_list.sort(key=lambda x: x[0])

for a in member_list:
    print(a[0],a[1])
