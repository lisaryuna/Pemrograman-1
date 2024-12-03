batas = int(input("Input: "))

ganjil = 1
while ganjil <= batas:
    print(ganjil, end=" ")
    ganjil += 2
print()

genap = batas if batas % 2 == 0 else batas - 1
while genap >= 2:
    print(genap, end=" ")
    genap -= 2
print()