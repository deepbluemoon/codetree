gender = int(input())
age = int(input())

if gender == 0 and age >= 19:
    print("MAN")
elif gender == 0 and age < 19:
    print("BOY")
elif gender == 1 and age >= 19:
    print("WOMAN")
elif gender == 1 and age < 19:
    print("GILE")
else:
    print("올바른 숫자를 입력하세요")