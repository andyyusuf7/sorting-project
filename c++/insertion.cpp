#include <iostream>
using namespace std;

void tampil(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "\nPass " << i << ":" << endl;
        cout << "Ambil key = " << key << endl;

        while (j >= 0 && arr[j] > key) {
            cout << "Bandingkan " << arr[j] << " > " << key << " -> Geser" << endl;
            
            arr[j + 1] = arr[j];
            j--;

            tampil(arr, n);
        }

        arr[j + 1] = key;

        cout << "Masukkan key di posisi " << j + 1 << endl;
        tampil(arr, n);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int arr[100];
    cout << "Masukkan data (pisah spasi): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "\nHasil akhir: ";
    tampil(arr, n);

    return 0;
}
