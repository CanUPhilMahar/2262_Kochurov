def every_other(seq):
    for i, x in enumerate(seq):
        if i % 2 == 0:
            yield x


print(*every_other([10, 20, 30, 40, 50]))
print(*every_other(range(10)))
print(*every_other(iter(range(10))))
print(sum(every_other(map(int, input().split()))))
