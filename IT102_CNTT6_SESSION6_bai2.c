#include <stdio.h>

int main(void) {
    int target = 20;
    int number;

    do {
        printf("hay nhap 1 so nguyen: ");
        scanf("%d", &number);

        if (number != target) {
            printf("again.\n");
        }

    } while (number != target);

    printf("yes sir %d.\n", target);

    return 0;
}
