import math

tinggi = int(input("A: "))
miring = int(input("B: "))

alas = math.sqrt((miring * miring) - (tinggi * tinggi))
keliling = tinggi + alas + miring
luas = (alas * tinggi)/2

print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(tinggi)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")