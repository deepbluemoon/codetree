text = str(input())

new_text = text.replace(text[1], "a", 1)
new_new_text = new_text.replace(new_text[-2], "a", 1)

print(new_new_text)
