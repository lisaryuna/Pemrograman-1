a = int(input("Input 1: "))
b = int(input("Input 2: "))
c = int(input("Input 3: "))

if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b

print(a, b, c)