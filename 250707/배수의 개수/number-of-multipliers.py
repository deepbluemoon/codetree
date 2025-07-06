number = []

for i in range(10):
    number.append(int(input()))

C3 = 0
C5 = 0

for num in number:
    if num % 3 == 0 and num % 5 == 0:
        C3 += 1
        C5 += 1
    elif num % 3 == 0:
        C3 += 1
    elif num % 5 == 0:
        C5 += 1
    else:
        continue

print(f"{C3} {C5}")