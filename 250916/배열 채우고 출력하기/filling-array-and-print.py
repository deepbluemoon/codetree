arr = list(map(str, input().split()))
a = []

for i in range(-1, -(len(arr)+1), -1):
    a.append(arr[i])

for i in range(len(a)):
    print(a[i], end="")