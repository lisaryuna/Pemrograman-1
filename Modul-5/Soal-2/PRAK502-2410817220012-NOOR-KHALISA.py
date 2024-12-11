def hitung(nilai1, nilai2):
    return mutlak(nilai1 - nilai2)
def mutlak(angka):
    return abs(angka)
def main():
    x1, y1, x2, y2 = map(int, input("Masukkan x1 y1 x2 y2: ").split())
    hasil = hitung(x1, x2) + hitung(y1, y2)
    print(mutlak(hasil))

if __name__ == "__main__":
    main()