def t(i):
    return i >= 2000

left = 0
right = 10**18

while right - left > 1:
    mid = (left + right) // 2
    if t(mid):
        right = mid
    else:
        left = mid

print(right)
