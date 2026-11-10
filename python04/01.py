def nSimple(n):
    limit = n * 15
    is_prime = [True] * (limit + 1)
    is_prime[0] = is_prime[1] = False
    for p in range(2, int(limit**0.5) + 1):
        if is_prime[p]:
            for i in range(p * p, limit + 1, p):
                is_prime[i] = False
    primes = [i for i in range(limit + 1) if is_prime[i]]
    return primes[n-1]

n = int(input())
print(nSimple(n))
