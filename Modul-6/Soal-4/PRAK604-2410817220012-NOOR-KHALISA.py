kode = input("Kode: ")
pesan = input("Pesan: ")
if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bintang = 0
    pagar = 0
    hasil =[]

    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            hasil.append('*')
            bintang += 1
        else:
            hasil.append('#')
            pagar += 1
    print("".join(hasil))
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")