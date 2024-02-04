import math;

def calculate_function(x: float, y: float):
	return pow(x, 2) + math.sin(x * y) - pow(y, 2)

while(True):
	try:
		number_x, number_y = map(float, input().split())
	except:
		exit()

	result = calculate_function(number_x, number_y)
	print(f'{result:.4f}')