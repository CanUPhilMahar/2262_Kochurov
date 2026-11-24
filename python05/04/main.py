n, m = map(int, input().split())
rows = [input().split() for _ in range(n)]

for j in range(m):
    print(" ".join(rows[i][j] for i in range(n)))
