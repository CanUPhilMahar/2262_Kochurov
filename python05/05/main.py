import math

w, h, s = map(int, input().split())
n = int(input())
pts = [tuple(map(int, input().split())) for _ in range(n)]

pts.sort(key=lambda p: (p[0] // s, p[1] if (p[0] // s) % 2 == 0 else -p[1], p[0]))

total = 0.0
px, py = pts[0]
for x, y in pts[1:]:
    total += math.hypot(x - px, y - py)
    px, py = x, y

print(f"{total:.10f}")
