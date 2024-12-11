def reverse(angka):
    reverse_angka = 0
    while angka != 0:
        reverse_angka = reverse_angka * 10 + angka % 10
        angka = angka // 10
    return reverse_angka
def main():
    A, B = map(int, input("Input: ").split())
    A = reverse(A)
    B = reverse(B)
    C = A + B
    print(reverse(C))

if __name__ == "__main__":
    main()