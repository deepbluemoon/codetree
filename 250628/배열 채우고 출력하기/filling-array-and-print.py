arr = list(map(str, input().split()))
data = []

for i in range(-1,-(len(arr) +1), -1):
    data.append(arr[i])

for i in range(len(data)):
    print(data[i], end="")