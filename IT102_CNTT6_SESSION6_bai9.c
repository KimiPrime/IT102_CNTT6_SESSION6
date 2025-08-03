#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, num3 = 0;
    int choice;
    int isEntered = 0;

    do {
        printf("\n\tMENU\n");
        printf("1. Enter 3 numbers\n");
        printf("2. Sum of 3 numbers\n");
        printf("3. Average of 3 numbers\n");
        printf("4. Smallest number\n");
        printf("5. Largest number\n");
        printf("6. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                printf("Enter third number: ");
                scanf("%d", &num3);
                isEntered = 1;
                break;

            case 2:
                if (!isEntered) {
                    printf("You haven't entered 3 numbers yet!\n");
                } else {
                    printf("Sum: %d\n", num1 + num2 + num3);
                }
                break;

            case 3:
                if (!isEntered) {
                    printf("You haven't entered 3 numbers yet!\n");
                } else {
                    float average = (num1 + num2 + num3) / 3.0;
                    printf("Average: %.2f\n", average);
                }
                break;

            case 4:
                if (!isEntered) {
                    printf("You haven't entered 3 numbers yet!\n");
                } else {
                    int min = num1;
                    if (num2 < min) min = num2;
                    if (num3 < min) min = num3;
                    printf("Smallest number: %d\n", min);
                }
                break;

            case 5:
                if (!isEntered) {
                    printf("You haven't entered 3 numbers yet!\n");
                } else {
                    int max = num1;
                    if (num2 > max) max = num2;
                    if (num3 > max) max = num3;
                    printf("Largest number: %d\n", max);
                }
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
