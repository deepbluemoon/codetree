a, b = map(str, input().split())

if len(a) > len(b):
    print(a, end=" ")
    print(len(a))
elif len(a) == len(b):
    print('same')
else:
    print(b, end=" ")
    print(len(b))