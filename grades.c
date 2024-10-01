#include <stdio.h>

// Function declarations
void inputMarks(float marks[], int numModules);
float calculateAverage(float marks[], int numModules);
void printClassification(float average);

int main() {
    const int numModules = 5;
    float marks[numModules];
    
    // Input student marks
    inputMarks(marks, numModules);
    
    // Calculate average
    float average = calculateAverage(marks, numModules);
    
    // Print classification and determine prize eligibility
    printClassification(average);
    
    return 0;
}

// Function to input marks and validate input
void inputMarks(float marks[], int numModules) {
    for (int i = 0; i < numModules; i++) {
        do {
            printf("Enter mark for module %d (0-100): ", i + 1);
            scanf("%f", &marks[i]);
            if (marks[i] < 0 || marks[i] > 100) {
                printf("Invalid input. Marks must be between 0 and 100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }
}

// Function to calculate the average of marks
float calculateAverage(float marks[], int numModules) {
    float total = 0.0;
    for (int i = 0; i < numModules; i++) {
        total += marks[i];
    }
    return total / numModules;
}

// Function to classify the average and determine prize eligibility
void printClassification(float average) {
    printf("Final Average: %.2f%%\n", average);
    
    if (average >= 69.5) {
        printf("Classification: 1st (First-Class)\n");
        printf("Congratulations! You are eligible for a graduation prize.\n");
    } else if (average >= 59.5) {
        printf("Classification: 2.1 (Upper Second-Class)\n");
    } else if (average >= 49.5) {
        printf("Classification: 2.2 (Lower Second-Class)\n");
    } else if (average >= 39.5) {
        printf("Classification: 3rd\n");
    } else {
        printf("Classification: FAIL\n");
    }
}