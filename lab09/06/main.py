def gen(n):
    x = n
    yield x
    while x != 1:
        x = x // 2 if x % 2 == 0 else 3 * x + 1
        yield x


print(*gen(7))
print(*gen(1))
