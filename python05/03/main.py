word = input().strip()
n = int(input())

d = {}
for _ in range(n):
    key = input().strip()
    value = input().strip()
    d[key] = value

for i in range(1, len(word)):
    left, right = word[:i], word[i:]
    if left in d and right in d:
        print(d[left] + d[right])
        break
