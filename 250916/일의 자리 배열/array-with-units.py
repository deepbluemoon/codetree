x = list(map(int, input().split()))

for i in range(2,10):
    if x[i-1] + x[i-2] >= 10:
        x.append(x[i-1] + x[i-2] - 10)
    else:
        x.append(x[i-1] + x[i-2])

for i in range(len(x)):
    print(x[i], end=" ")


