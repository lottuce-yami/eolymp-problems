def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

nums_list = []
nums_gcd = 0

n = int(input())
for i in range(0, n):
	current_num = int(input())
	nums_list.append(current_num)
	nums_gcd = gcd(nums_gcd, current_num)

result = 0
for num in nums_list:
	result += num // nums_gcd

print(result)