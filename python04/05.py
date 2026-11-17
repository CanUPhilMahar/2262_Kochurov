ranks = ['6', '7', '8', '9', '10', 'Jack', 'Queen', 'King', 'Ace']

trump = input().strip()
n = int(input())
res = []
for _ in range(n):
    r1, s1 = input().split()   # карта, которой сходили
    r2, s2 = input().split()   # карта, которой отбили
    if s1 == s2:
        beat = ranks.index(r2) > ranks.index(r1)
    else:
        beat = s2 == trump
    res.append('1' if beat else '0')
print(' '.join(res))
