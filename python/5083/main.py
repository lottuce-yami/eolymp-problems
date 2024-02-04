def sum_digits(number: int):
	sum = 0
	while number:
		sum += number % 10
		number //= 10
	return sum

def calculate_function(numbers: list):
	min_value = -1
	min_num = 1

	for n in numbers:
		sum = sum_digits(n)
		if (sum <= min_value or min_value == -1):
			min_value = sum
			min_num = n

	return min_num

n = int(input())
numbers = list(map(int, input().split()))
result = calculate_function(numbers)
print(f'{result}')