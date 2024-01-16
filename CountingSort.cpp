#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

void countingSort(int arr[], int n) {
    int maxElement = findMax(arr, n);

    int countingArray[maxElement + 1] = {0};

    for (int i = 0; i < n; i++) {
        countingArray[arr[i]]++;
    }

    for (int i = 1; i <= maxElement; i++) {
        countingArray[i] += countingArray[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[countingArray[arr[i]] - 1] = arr[i];
        countingArray[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";
    }
     cout <<  endl;
}


int main() {
    int arr[] = {4, 2, 10, 1, 5, 3, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

     cout << "Original array: ";
    printArray(arr, n);

    countingSort(arr, n);

     cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
