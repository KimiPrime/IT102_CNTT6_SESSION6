#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    do {
        printf("Hãy nhập một số nguyên dương: ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Bro... số nguyên dương, không phải số âm!\n");
        }
    } while (number < 0);

    for (int i = 1; i <= number; i++) {
        sum = sum + i;
    }

    printf("Tổng từ 1 đến %d là: %d\n", number, sum);
    return 0;
}
