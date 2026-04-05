def selection_sort(arr):
    n = len(arr)

    for i in range(n - 1):
        print(f"\nPass {i+1}:")
        min_idx = i

        for j in range(i + 1, n):
            print(f"Bandingkan {arr[min_idx]} dengan {arr[j]}", end=" ")

            if arr[j] < arr[min_idx]:
                min_idx = j
                print("-> Minimum baru")
            else:
                print("-> Tidak berubah")

            print("  ", arr)

        # Tukar posisi
        if min_idx != i:
            print(f"Tukar {arr[i]} dengan {arr[min_idx]}")
            arr[i], arr[min_idx] = arr[min_idx], arr[i]

        print("Hasil pass:", arr)

    return arr


# Input
n = int(input("Masukkan jumlah data: "))
data = list(map(int, input("Masukkan data (pisah spasi): ").split()))

# Proses
hasil = selection_sort(data)

# Output
print("\nHasil akhir:", hasil)