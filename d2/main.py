import math

numbers = [13.1, 1.32, 5.1, 12.6, 1.0, 13.2, 1.9, 5.8]
numbers.sort(key=lambda x: (math.floor(x), -(x - math.floor(x))))
print(*numbers, sep='; ')
