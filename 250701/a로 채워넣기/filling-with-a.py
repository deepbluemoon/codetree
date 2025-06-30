text = input()

text_len = len(text)

text = text[:1] + 'a' + text[2:]
text = text[:text_len - 2] + 'a' + text[text_len - 1:]

print(text)