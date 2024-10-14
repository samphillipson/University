#include <stdio.h>
#include <string.h>

// Function to swap two strings
void swap(char arr[][20], int i, int j) {
    char temp[20];
    strcpy(temp, arr[i]);
    strcpy(arr[i], arr[j]);
    strcpy(arr[j], temp);
}

// Bubble Sort function to sort in descending order
void bubbleSort(char arr[][20], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Compare strings using strcmp
            if (strcmp(arr[j], arr[j + 1]) < 0) {  // Descending order
                swap(arr, j, j + 1);
            }
        }
    }
}

// Insertion Sort function to sort in descending order
void insertionSort(char arr[][20], int n) {
    int i, j;
    char key[20];
    for (i = 1; i < n; i++) {
        strcpy(key, arr[i]);
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && strcmp(arr[j], key) < 0) {
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
}

// Function to print the array of names
void printArray(char arr[][20], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    char names1[][20] = {"Matthew", "Andrew", "Dylan", "Melody", "Nancy", "Imran", "Jacob", "Juliet"};
    char names2[][20] = {"Matthew", "Andrew", "Dylan", "Melody", "Nancy", "Imran", "Jacob", "Juliet"};
    int n = sizeof(names1) / sizeof(names1[0]);

    printf("Original Array: ");
    printArray(names1, n);

    // Perform Bubble Sort
    bubbleSort(names1, n);
    printf("Bubble Sorted Array: ");
    printArray(names1, n);

    // Perform Insertion Sort
    insertionSort(names2, n);
    printf("Insertion Sorted Array: ");
    printArray(names2, n);

    return 0;
}