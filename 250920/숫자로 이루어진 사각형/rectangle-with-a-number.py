n = int(input())

# Please write your code here.

def arr(n):
    a = 1
    for _ in range(n):
        for _ in range(n):
            print(a, end=" ")
            a += 1
            if a == 10:
                a = 1
        print()

arr(n)