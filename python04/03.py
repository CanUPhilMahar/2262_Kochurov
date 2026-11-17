from string import ascii_lowercase

s = input()
cnt = dict(map(lambda c: (c, s.count(c)), ascii_lowercase))
mx = max(cnt.values())
ch = next(filter(lambda c: cnt[c] == mx, s))  # первая самая частая в строке
print(s.replace(ch, ''))
