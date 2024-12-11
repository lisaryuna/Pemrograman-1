def maksimal(a, b):
    return a if a > b else b
def minimal(a, b):
    return b if a > b else b
def main():
    bilangan = int(input("Masukkan jumlah bilangan: "))
    nilai_list = list(map(int, input(f"Masukkan {bilangan} bilangan: ").split()))
    maks = max(nilai_list)
    minim = min(nilai_list)
    
    print(f"{maks} {minim}")

if __name__ == "__main__":
    main()