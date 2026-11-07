x = [int(t) for t in input().split()]
i = 0
while i < len(x) and (x[i] >= i and x[i] <= 2*i):
   i += 1
print(i)

#if x[i] < i or x[i] > 2*i:
