ruang = int(input("Jumlah ruangan: "))
zetsu = list(map(int, input("Jumlah zetsu putih: ").split()))
hasil = [zetsu[i] * (i + 1) for i in range(ruang)]
print(" ".join(map(str, hasil)))