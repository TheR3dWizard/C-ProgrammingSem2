#include <stdio.h>
#include <string.h>

void sort(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    sort(arr,5);
    int i;
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}


int findShortestString(char arr[][100], int n) {
    int shortestLength = strlen(arr[0]);

    for (int i = 1; i < n; i++) {
        int length = strlen(arr[i]);
        if (length < shortestLength)
            shortestLength = length;
    }

    return shortestLength;
}

int findLongestString(char arr[][100], int n) {
    int longestLength = strlen(arr[0]);

    for (int i = 1; i < n; i++) {
        int length = strlen(arr[i]);
        if (length > longestLength)
            longestLength = length;
    }

    return longestLength;
}

float calculateAverageLength(char arr[][100], int n) {
    int totalLength = 0;

    for (int i = 0; i < n; i++) {
        totalLength += strlen(arr[i]);
    }

    return (float) totalLength / n;
}

int countStringsAboveThreshold(char arr[][100], int n, int threshold) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (strlen(arr[i]) > threshold)
            count++;
    }

    return count;
}

int main() {
    char arr[100][100];
    int n, choice, threshold;

    printf("Enter the number of strings (up to 100): ");
    scanf("%d", &n);
    getchar(); // Clear the newline character from the input buffer

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0'; // Remove the trailing newline character
    }

    do {
        printf("\nMenu:\n");
        printf("1. Find the length of the shortest string\n");
        printf("2. Find the length of the longest string\n");
        printf("3. Calculate the average length of all the strings\n");
        printf("4. Count the number of strings with a length greater than a given threshold\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int shortestLength = findShortestString(arr, n);
                printf("Length of the shortest string: %d\n", shortestLength);
                break;
            }
            case 2: {
                int longestLength = findLongestString(arr, n);
                printf("Length of the longest string: %d\n", longestLength);
                break;
            }
            case 3: {
                float averageLength = calculateAverageLength(arr, n);
                printf("Average length of all strings: %.2f\n", averageLength);
                break;
            }
            case 4: {
                printf("Enter the threshold length: ");
                scanf("%d", &threshold);
                int count = countStringsAboveThreshold(arr, n, threshold);
                printf("Number of strings with length greater than %d: %d\n", threshold, count);
                break;
            }
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}