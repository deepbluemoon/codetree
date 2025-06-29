x, y = map(int, input().split())
z = [x, y]
for i in range(8):
    if z[i] + z[i+1] < 10:
        z.append(z[i] + z[i+1])
    elif z[i] + z[i + 1] > 10:
        z.append(z[i] + z[i + 1] - 10)
    else:
        z.append(0)

for i in range(len(z)):
    print(z[i], end=" ")