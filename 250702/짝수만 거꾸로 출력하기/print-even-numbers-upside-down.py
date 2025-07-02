N = int(input())
numbers = map(int, input().split())
a = []

for num in numbers:
     if num % 2 == 0:
        a.append(num)

a.reverse()

for i in range(len(a)):
    print(a[i], end=" ")