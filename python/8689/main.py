def calculate_function(x: int):
	return 1 + x + pow(x, 2)

number = int(input())
result = calculate_function(number)
print(f'{result}')