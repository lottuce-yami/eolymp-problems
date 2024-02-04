def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

def lcm(a: int, b: int) -> int:
	return abs(a * b) // gcd(a, b)

a, b = map(int, input().split())
print(lcm(a, b))
