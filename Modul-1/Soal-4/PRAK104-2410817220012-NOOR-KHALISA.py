# Harga sepatu
harga_sepatu_a = 400000
harga_sepatu_b = 350000

# Diskon
diskon_a = 0.13  # 13%
diskon_b = 0.21  # 21%

harga_setelah_diskon_a = harga_sepatu_a * (1 - diskon_a)
harga_setelah_diskon_b = harga_sepatu_b * (1 - diskon_b)

# Output
print(f"Harga sepatu A adalah {harga_sepatu_a}")
print(f"Harga sepatu B adalah {harga_sepatu_b}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {harga_setelah_diskon_a:.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {harga_setelah_diskon_b:.0f}")