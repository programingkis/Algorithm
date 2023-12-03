word = []
N = int(input())
for i in range(N):
    word_a = input()
    if word_a not in word:
        word.append(word_a)
word.sort()
word.sort(key = len)

for a in word:
    print(a)
