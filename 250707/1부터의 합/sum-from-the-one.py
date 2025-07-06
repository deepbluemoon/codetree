N = int(input())
s = 0

for i in range(1,N+1):
    if s >= N:
        print(i - 1)
        break
    else:
        s += i
