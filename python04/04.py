rows = ['1234567890', 'qwertyuiop', 'asdfghjkl', 'zxcvbnm']

n = int(input())
for _ in range(n):
    password = input().strip()
    ok = True
    for row in rows:
        found = False
        for c in password:
            if c in row:
                found = True
        if not found:
            ok = False
    print('strong' if ok else 'weak')
