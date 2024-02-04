def calculate_function(x: float):
	return pow(x, 3) + 2 * pow(x, 2) - 3

while(True):
	try:
		number = float(input())
	except:
		exit()

	result = calculate_function(number)
	print(f'{result:.4f}')