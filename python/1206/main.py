calculated = {}

def f91(number: int):
    if number <= 100:
        if number not in calculated:
            calculated[number] = f91(f91(number + 11))
        return calculated[number]
    return number - 10

input_num = int(input())
print(f91(input_num))