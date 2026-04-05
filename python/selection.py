def bubble_sort(arr):
    n = len(arr)
    
    for i in range(n - 1):
        print(f"\nPass {i+1}:")
        
        for j in range(n - i - 1):
            print(f"  Bandingkan {arr[j]} dan {arr[j+1]}", end=" -> ")
            
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                print("Tukar")
            else:
                print("Tidak ditukar")
            
            print("  ", arr)
    
    return arr


# Input jumlah data
n = int(input("Masukkan jumlah data: "))

# Input data (dipastikan sesuai jumlah)
while True:
    data = list(map(int, input("Masukkan data (pisah spasi): ").split()))
    
    if len(data) != n:
        print(f"Jumlah data harus {n}, coba lagi!")
    else:
        break

# Proses
hasil = bubble_sort(data)

# Output akhir
print("\nHasil akhir:", hasil)
