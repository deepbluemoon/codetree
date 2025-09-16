N = int(input())

a = list(map(int, input().split()))
a.reverse()

for i in range(0, N):
    if a[i] % 2 == 0:
        print(a[i], end=" ")
    else:
        pass