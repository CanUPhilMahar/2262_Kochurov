n = int(input())
a = [int(x) for x in input().split()]
b = c = d = False
for i in range(0,n):
  match a[i]:
    case 1:
      b = True
    case 2:
      c = True
    case 3:
      d = True    
  if b and c and d:
    break
print(i+1)
