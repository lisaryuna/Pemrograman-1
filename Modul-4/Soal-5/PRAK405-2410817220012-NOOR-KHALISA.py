n = int(input("Input baris pertama: "))
kelipatan = int(input("Input baris kedua: "))

total = 0

for j in range(1, n + 1):
    jumlah = 0

    for k in range(j, 0, -1):
        nilai = k * kelipatan
        jumlah += nilai
        print(f"({k} * {kelipatan})", end="")
        if k > 1:
            print(" + ", end="")

    total += jumlah
    print(f" = {jumlah}")

print(total)