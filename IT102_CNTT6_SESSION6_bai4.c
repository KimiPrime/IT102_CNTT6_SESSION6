#include <stdio.h>

int main() {
    int number;

    do {
        printf("Nhập một số nguyên từ 1 đến 10: ");
        scanf("%d", &number);

        if (number < 1 || number > 10) {
            printf("Số không hợp lệ. Vui lòng nhập lại.\n");
        }
    } while (number < 1 || number > 10);

    printf("Bảng cửu chương của %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
