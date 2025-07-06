A, B = map(int, input().split())
cnt = 0

for num in range(A, B + 1):
    if num % 2 == 0:
        cnt += num
        continue
    else:
        continue

print(cnt)