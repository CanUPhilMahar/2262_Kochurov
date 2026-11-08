a = [int(x) for x in input().split()]

for x in a:
    if x < 0:
        print(x)
        break
else:
    print("Отрицательных чисел нет")
