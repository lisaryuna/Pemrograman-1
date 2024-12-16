n1, n2 = map(int, input("n1 dan n2: ").split())
if n1 != n2:
    print("Jumlah tidak sama.")
else:
    baris1 = list(map(int, input("Baris pertama: ").split()))
    baris2 = list(map(int, input("Baris kedua  : ").split()))
    hasil = [baris1[i] * baris2[i] for i in range(n1)]
    print(" ".join(map(str, hasil)))