bil = int(input("Masukkan bilangan: "))

if bil == 0: print("Nol")
elif 0 < bil < 10: print("Satuan")
elif bil == 10 or (20 <= bil <= 99): print("Puluhan")
elif bil <= bil <= 19: print("Belasan")
else: print("Anda Menginput Melebihi Limit Bilangan")