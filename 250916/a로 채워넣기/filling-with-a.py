text = list(map(str, input()))

text[1] = 'a'
text[-2] = 'a'

for i in range(len(text)):
    print(text[i], end="")