a = 0
b = 0
number = []

for i in range(10):
    number.append(int(input()))

for num in number:
    if num % 3 == 0 and num % 5 == 0:
        a += 1
        b += 1
    elif num % 3 == 0:
        a += 1
    elif num % 5 == 0:
        b += 1
    else:
        continue

print(a, b, end=" ")

