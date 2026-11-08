a = list(range(10))
b = [a.pop() - x for x in a]
print(*b)
