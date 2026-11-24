n, m = map(int, input().split())
a = list(map(float, input().split()))

for _ in range(m):
    b = [0.0] * n
    b[0] = (2 * a[0] + a[1]) / 3
    for i in range(1, n - 1):
        b[i] = (a[i - 1] + a[i] + a[i + 1]) / 3
    b[-1] = (2 * a[-1] + a[-2]) / 3
    a = b

print(" ".join(f"{x:.6f}" for x in a))
