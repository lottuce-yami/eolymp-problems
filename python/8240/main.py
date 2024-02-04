import math;

def calculate_function(x: float):
	return math.sqrt(x) + 2 * x + math.sin(x)

while(True):
	try:
		number = float(input())
	except:
		exit()

	result = calculate_function(number)
	print(f'{result:.4f}')