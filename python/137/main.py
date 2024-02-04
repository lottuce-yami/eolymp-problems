def calculate_function(nums: list):
	nums.sort(reverse=True)
	gcd = []

	for i in range(nums[0], 0, -1):
		for n in nums:
			if (n % i != 0):
				gcd = []
				break
			else:
				gcd.append(i)
				continue
		if len(gcd) == len(nums):
			break
		
	return gcd[0]


n = int(input())
nums = list(map(int, input().split()))
result = calculate_function(nums)
print(f'{result}')