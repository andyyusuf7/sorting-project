def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[-1]
    print(f"\nPivot = {pivot}")

    left = []
    right = []

    for x in arr[:-1]:
        print(f"Bandingkan {x} dengan {pivot}", end=" ")
        if x <= pivot:
            left.append(x)
            print("-> Masuk kiri")
        else:
            right.append(x)
            print("-> Masuk kanan")

    print("Kiri :", left)
    print("Kanan:", right)

    return quick_sort(left) + [pivot] + quick_sort(right)


# Input
n = int(input("Masukkan jumlah data: "))
data = list(map(int, input("Masukkan data: ").split()))

# Proses
hasil = quick_sort(data)

# Output
print("\nHasil akhir:", hasil)