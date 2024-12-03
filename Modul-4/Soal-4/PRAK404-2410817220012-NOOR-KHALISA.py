while True:
    print("Pilih program:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    try:
        pilihan = int(input("Masukkan Pilihan: "))
    except ValueError:
        print("Input anda salah, silakan masukkan angka antara 1-5.")
        continue

    if pilihan == 5:
        print("Terima kasih, telah menggunakan kalkulator anda.")
        break
    elif 1 <= pilihan <= 4:
        try:
            nilai1 = float(input("Masukkan nilai pertama: "))
            nilai2 = float(input("Masukkan nilai kedua: "))
        except ValueError:
            print("Input nilai harus berupa angka. Silakan coba lagi.")
            continue

        if pilihan == 1:
            hasil = nilai1 + nilai2
            print(f"Hasil Penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:
            hasil = nilai1 - nilai2
            print(f"Hasil Pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:
            hasil = nilai1 * nilai2
            print(f"Hasil Perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 4:
            if nilai2 != 0:
                hasil = nilai1 / nilai2
                print(f"Hasil Pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
            else:
                print("Error: Pembagian dengan nol tidak diperbolehkan.")
    else:
        print("Input anda salah, silakan masukkan angka antara 1-5.")