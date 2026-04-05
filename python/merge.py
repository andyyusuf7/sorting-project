def merge(arr, l, m, r):
    left = arr[l:m+1]
    right = arr[m+1:r+1]

    print(f"\nGabung: {left} dan {right}")

    i = j = 0
    k = l

    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1
        print(" ", arr)

    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1
        print(" ", arr)

    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1
        print(" ", arr)


def merge_sort(arr, l, r):
    if l < r:
        m = (l + r) // 2

        print(f"\nBagi: {arr[l:r+1]}")

        merge_sort(arr, l, m)
        merge_sort(arr, m+1, r)
        merge(arr, l, m, r)


# Input
n = int(input("Masukkan jumlah data: "))
data = list(map(int, input("Masukkan data: ").split()))

merge_sort(data, 0, n-1)

print("\nHasil akhir:", data)