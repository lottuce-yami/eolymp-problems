def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

a, b = map(int, input().split())
print(gcd(a, b))
