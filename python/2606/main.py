def calculate_function(a: int, b: int):
	result = ''

	if (a > b):
		result = f'{b} {a}'
	else:
		result = f'{a} {b}'

	return result

a, b = map(int, input().split())
result = calculate_function(a, b)
print(f'{result}')