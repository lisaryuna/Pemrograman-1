def cetak_bersilangan(a, b):
    if a < b:
        i, j = a, b
        hasil = []
        while i <= b and j >= a:
            hasil.append(f"{i} {j}")
            i += 1
            j -= 1
    else:
        i, j = a, b
        hasil = []
        while i >= b and j <= a:
            hasil.append(f"{i} {j}")
            i -= 1
            j += 1
    print(" - ".join(hasil))

a = int(input("Input pertama: "))
b = int(input("Input kedua: "))

cetak_bersilangan(a, b)