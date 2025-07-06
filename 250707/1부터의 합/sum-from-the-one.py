N = int(input())
s = 0

for i in range(1,102):
    if s >= N:
        print(i - 1)
        break
    else:
        s += i