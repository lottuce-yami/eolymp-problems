def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

def lcm(a: int, b: int) -> int:
	return abs(a * b) // gcd(a, b)

a, b = list(map(int, input().split()))
nums_lcm = lcm(a, b)

result = nums_lcm - a - b
if result < 0:
  result += nums_lcm

print(result)
