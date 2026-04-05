#include <iostream>
using namespace std;

void tampil(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high, int n) {
    int pivot = arr[high];
    cout << "\nGunakan pivot = " << pivot << endl;

    int i = low - 1;

    for (int j = low; j < high; j++) {
        cout << "Bandingkan " << arr[j] << " <= " << pivot;

        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
            cout << " -> Tukar\n";
        } else {
            cout << " -> Tidak\n";
        }

        tampil(arr, n);
    }

    swap(arr[i + 1], arr[high]);
    cout << "Tukar pivot\n";
    tampil(arr, n);

    return i + 1;
}

void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high, n);

        cout << "Pivot di posisi " << pi << endl;

        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int arr[100];
    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1, n);

    cout << "\nHasil akhir: ";
    tampil(arr, n);

    return 0;
}
