def insertion_sort(arr):
    n = len(arr)

    for i in range(1, n):
        key = arr[i]
        j = i - 1

        print(f"\nPass {i}:")
        print(f"Ambil key = {key}")

        # Geser elemen yang lebih besar dari key
        while j >= 0 and arr[j] > key:
            print(f"Bandingkan {arr[j]} > {key} -> Geser")
            arr[j + 1] = arr[j]
            j -= 1
            print(" ", arr)

        # Masukkan key ke posisi yang benar
        arr[j + 1] = key
        print(f"Masukkan key di posisi {j+1}")
        print(" ", arr)

    return arr


# Input
n = int(input("Masukkan jumlah data: "))

while True:
    data = list(map(int, input("Masukkan data: ").split()))
    if len(data) != n:
        print(f"Harus {n} data!")
    else:
        break

# Proses
hasil = insertion_sort(data)

# Output
print("\nHasil akhir:", hasil)