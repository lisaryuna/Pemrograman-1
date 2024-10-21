import math

# Variabel
putaran = 5
jarak = 14 # dalam kilometer

# Keliling taman
keliling = jarak / putaran

# Jari-jari 
jari_jari = keliling / (2 * math.pi)

# Output
print("Diketahui:")
print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak} Kilometer")
print("\nJawaban:")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f} Kilometer")