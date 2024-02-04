def calculate_function(a: int, b: int, c: int):
	median = 0
	if ((b > a and a > c) or (c > a and a > b)):
		median = a
	elif ((a > b and b > c) or (c > b and b > a)):
		median = b
	else:
		median = c

	return median

a, b, c = map(int, input().split())
result = calculate_function(a, b, c)
print(f'{result}')