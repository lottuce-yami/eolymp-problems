def calculate_function(x: int, y: int, z: int):
	return x * y * z + x + pow(y, 2) + pow(z, 3)

x, y, z = map(int, input().split())
result = calculate_function(x, y, z)
print(f'{result}')