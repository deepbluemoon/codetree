p = ["apple", "banana", "grape", "blueberry", "orange"]

N = input()
cnt = 0

for i in p:
	if i[2] == N or i[3] == N:
		print(i)
		cnt +=1
print(cnt)