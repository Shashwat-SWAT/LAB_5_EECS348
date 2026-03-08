#define SIZE 5

#include <stdio.h>

int main() {

    int arr[SIZE][SIZE];
    int sum = 0;

    for (int i=0; i<SIZE; i++) {
        for (int j=0; j<SIZE; j++) {
            printf("Enter a number for position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}