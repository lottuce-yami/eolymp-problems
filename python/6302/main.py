def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

def lcm(a: int, b: int) -> int:
	return abs(a * b) // gcd(a, b)

nums_lcm = 1

n = int(input())
nums = list(map(int, input().split()))
for current_num in nums:
	nums_lcm = lcm(nums_lcm, current_num)

print(nums_lcm)
