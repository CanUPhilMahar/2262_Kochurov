def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


# без синтаксиса @ декоратор применяется как обычная функция
maximum = toint(max)
print(max('10', '9', '100'))
print(maximum('10', '9', '100'))

add = toint(lambda a, b: a + b)
print(add('2', '3'))

total = toint(lambda *args: sum(args))
print(total(*'2 5 11 3 8'.split()))
