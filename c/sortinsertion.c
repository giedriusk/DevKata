#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buildArray(int a[], int n) {
    int i;
    srand(time(0));
    for (i = 0; i < n; i++) {
        a[i] = rand();
    }
}

void printArray(int arr[], int n) {
    int i;
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\r\n");
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    
    printf("Build array.\r\n");
    int n = 100000;
    int* arr = malloc(sizeof(int) * n);
    buildArray(arr, n);
    //printArray(arr, n);

    printf("Sort array.\r\n");
    insertionSort(arr, n);
    //printArray(arr, n);
    
    printf("Destroy array.\r\n");
    free(arr);

    return 0;
}