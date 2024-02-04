import math;

def calculate_function(x: float):
	return x + math.sin(x)

number = float(input())
result = calculate_function(number)
print(f'{result:.4f}')