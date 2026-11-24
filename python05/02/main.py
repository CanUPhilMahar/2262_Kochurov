n = int(input())
nums = list(map(int, input().split()))

nums.sort(key=lambda x: (abs(x), 0 if x < 0 else 1))

print(*nums)
