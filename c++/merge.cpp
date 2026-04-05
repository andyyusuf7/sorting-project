#include <iostream>
using namespace std;

void tampil(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// fungsi merge
void merge(int arr[], int l, int m, int r, int n) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[100], R[100];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    cout << "\nGabung: ";
    for (int i = 0; i < n1; i++) cout << L[i] << " ";
    cout << "dan ";
    for (int j = 0; j < n2; j++) cout << R[j] << " ";
    cout << endl;

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;

        tampil(arr, n);
    }

    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
        tampil(arr, n);
    }

    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
        tampil(arr, n);
    }
}

// fungsi merge sort
void mergeSort(int arr[], int l, int r, int n) {
    if (l < r) {
        int m = (l + r) / 2;

        cout << "\nBagi: ";
        for (int i = l; i <= r; i++)
            cout << arr[i] << " ";
        cout << endl;

        mergeSort(arr, l, m, n);
        mergeSort(arr, m + 1, r, n);
        merge(arr, l, m, r, n);
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

    mergeSort(arr, 0, n - 1, n);

    cout << "\nHasil akhir: ";
    tampil(arr, n);

    return 0;
}

