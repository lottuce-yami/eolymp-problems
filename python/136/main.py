def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

x1, y1, x2, y2 = map(int, input().split())
print(gcd(abs(x1 - x2), abs(y1 - y2)) + 1)
