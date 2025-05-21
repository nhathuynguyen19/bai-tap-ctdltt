#include <iostream>
using namespace std;

void insertSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}

int partitionAndPivot(int a[], int head, int last) {
    int pivot = a[last];
    int i = head - 1;
    for (int j = head; j < last; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    pivot = i + 1;
    swap(a[pivot], a[last]);
    return pivot;
}

void quickSort(int a[], int head, int last) {
    if (head < last) {
        int pivot = partitionAndPivot(a, head, last);
        quickSort(a, head, pivot - 1);
        quickSort(a, pivot + 1, last);
    }
}

int searchTuanTu(int a[], int head, int last, int x) {
    if (a[head] == x) return head;
    if (head < last) return searchTuanTu(a, head + 1, last, x);
    return -1;
}

int binarySearch(int a[], int head, int last, int x) {
    if (head <= last) {
        int mid = (head + last) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] < x)
            return binarySearch(a, mid + 1, last, x);
        else
            return binarySearch(a, head, mid - 1, x);
    }
    return -1;
}

int main() {
    int a[] = {45, 21, 53, 60, 9, 14};
    cout << "After sorting: ";
    quickSort(a, 0, 5);
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "find: ";
    cout << binarySearch(a, 0, 5, 21) << endl;
}