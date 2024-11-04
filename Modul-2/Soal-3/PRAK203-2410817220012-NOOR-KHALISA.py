def hitung(a, b, i, j, x, y):
    hasil = (((a - b) * i) / j) - (x + y)
    return hasil
input = input("Masukkan nilai a, b, i, j, x, dan y secara berurutan (pisahkan dengan spasi): ")
a, b, i, j, x, y = map(float, input.split())

hasil = hitung(a, b, i, j, x, y)

print(f"Hasil: {hasil:.3f}")