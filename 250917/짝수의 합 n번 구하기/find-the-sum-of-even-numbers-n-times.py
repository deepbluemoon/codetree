N = int(input())

for i in range(1, N + 1):
    a, b = list(map(int, input().split()))
    c = 0
    for j in range(a, b+1):
        if j % 2 == 0:
            c+= j
    print(c)
print()