def Biodata(tahunLahir, Namaku, Asal):
  tahunSekarang = 2020
  umur = tahunSekarang - tahunLahir
  print(f"Perkenalkan Nama Saya: {Namaku}")
  print(f"Umur Saya: {umur}")
  print(f"Saya Adalah Angkatan: {tahunSekarang}")
  print(f"Asal Saya dari: {Asal}")

tahunLahir = int(input("Tahun lahir: "))
Namaku = input("Nama: ")
Asal = input("Asal: ")
Biodata(tahunLahir, Namaku, Asal)