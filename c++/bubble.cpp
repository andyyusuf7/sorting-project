#include <iostream>
using namespace std;

// Fungsi untuk menampilkan array dengan highlight
void tampil(int arr[], int n, int a, int b) {
    for (int i = 0; i < n; i++) {
        if (i == a || i == b)
            cout << "[" << arr[i] << "] ";
        else
            cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "\nPass " << i + 1 << ":\n";

        for (int j = 0; j < n - i - 1; j++) {
            tampil(arr, n, j, j + 1);

            if (arr[j] > arr[j + 1]) {
                // Tukar
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout << "Tukar\n";
            } else {
                cout << "Tidak ditukar\n";
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int arr[100]; // maksimal 100 data
    cout << "Masukkan data (pisah spasi): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "\nHasil akhir: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
