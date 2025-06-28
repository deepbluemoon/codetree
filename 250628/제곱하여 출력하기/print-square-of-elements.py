N = int(input())
x = list(map(int, input().split()))

y = []

for i in range(N):
    y.append(x[i] ** 2)
    
for i in range(len(y)):
    print(y[i], end=" ")
