def gcd(a: int, b: int) -> int:
	return b if a == 0 else gcd(b % a, a)

while (True):
	try:
		a, b = map(int, input().split())
	except:
		exit()

	k = 0
	t = (a + b) / gcd(a, b)

	while (t % 2 == 0):
		t /= 2
		k += 1
	if (t > 1):
		k = -1

	print(k)