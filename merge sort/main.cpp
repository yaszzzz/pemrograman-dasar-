#include <stdio.h>
#include <conio.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Membuat array sementara untuk bagian kiri dan kanan
    int L[n1], R[n2];

    // Menyalin data ke array sementara
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Menggabungkan kembali array sementara ke array utama
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin sisa elemen dari array L jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Menyalin sisa elemen dari array R jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Memanggil mergeSort untuk dua bagian yang dibagi
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Menggabungkan dua bagian yang diurutkan
        merge(arr, left, mid, right);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 4, 7, 1, 9, 3, 15};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan: \n");
    printArray(arr, arr_size);

    // Melakukan merge sort
    mergeSort(arr, 0, arr_size - 1);

    printf("\nArray setelah diurutkan: \n");
    printArray(arr, arr_size);

getch();
}
