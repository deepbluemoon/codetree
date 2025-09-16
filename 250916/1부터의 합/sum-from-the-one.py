N = int(input())
a = 0

for i in range(0, 101, 1):
    a += i
    if a >= N:
        break
print(i)

        
    