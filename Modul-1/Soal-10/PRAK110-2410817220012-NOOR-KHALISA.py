import math

# Alas dan tinggi segitiga
alas = 5  # dalam cm
tinggi = 12  # dalam cm

# Sisi miring (sisi C) menggunakan Pythagoras
sisi_a = tinggi
sisi_b = int(math.sqrt((alas ** 2) + (tinggi ** 2)))  # Casting ke int
sisi_c = alas

# Keliling segitiga
keliling = sisi_a + sisi_b + sisi_c

# Luas segitiga
luas = (alas * tinggi) // 2  # Pembagian bulat

# Output
print("Diketahui:")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")
print("Jawab:")
print(f"Sisi A = {sisi_a} cm")
print(f"Sisi B = {sisi_b} cm")
print(f"Sisi C = {sisi_c} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")