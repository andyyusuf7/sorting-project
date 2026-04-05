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


# Input
n = int(input("Masukkan jumlah data: "))
data = list(map(int, input("Masukkan data (pisah spasi): ").split()))

# Proses
hasil = bubble_sort(data)

# Output akhir
print("\nHasil akhir:", hasil)