baris, kolom = map(int, input("Baris dan kolom: ").split())
elemen = list(map(int, input("Elemen-elemen matriks: ").split()))

matriks = [elemen[i * kolom: (i + 1) * kolom] for i in range(baris)]
print("Matriks: ")
for row in matriks:
    print(" ".join(map(str, row)))