totalDetik = int(input("Masukkan jumlah detik: "))

hari = 0
if totalDetik >= 86400:
    hari = totalDetik // 86400
    totalDetik = totalDetik %86400

if totalDetik >= 3600:
    jam = totalDetik // 3600
    totalDetik = totalDetik % 3600
else: jam = 0

if totalDetik >= 60:
    menit = totalDetik // 60
    totalDetik = totalDetik % 60
else: menit = 0

detik = totalDetik
if hari > 0:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:    
    print(f"{jam:02}:{menit:02}:{detik:02}")