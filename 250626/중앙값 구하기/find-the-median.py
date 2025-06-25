A, B, C = map(int, input().split())

if A > B:
    if A < C:
        print(A)
    elif C < B:
        print(B)
    else:
        print(C)
else: #A < B
    if B < C:
        print(B)
    elif C < B:
        print(C)
    else:
        print(A)