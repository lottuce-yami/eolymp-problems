def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

def lcm(a: int, b: int) -> int:
	return abs(a * b) // gcd(a, b)

def calculate(a: int, b: int) -> str:
	return f'{gcd(a, b)} {lcm(a, b)}'

t = int(input())
for i in range(0, t):
	a, b = map(int, input().split())
	print(calculate(a, b))
