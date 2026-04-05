#include <iostream>
using namespace std;

// fungsi tampil array
void tampil(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "\nPass " << i + 1 << ":" << endl;

        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            cout << "Bandingkan " << arr[min_idx] << " dengan " << arr[j];

            if (arr[j] < arr[min_idx]) {
                min_idx = j;
                cout << " -> Minimum baru";
            } else {
                cout << " -> Tidak berubah";
            }
            cout << endl;

            tampil(arr, n);
        }

        // tukar posisi
        if (min_idx != i) {
            cout << "Tukar " << arr[i] << " dengan " << arr[min_idx] << endl;
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }

        cout << "Hasil pass: ";
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

    selectionSort(arr, n);

    cout << "\nHasil akhir: ";
    tampil(arr, n);

    return 0;
}
