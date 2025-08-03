#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, num3 = 0;
    int choice;
    int isEntered = 0;

    do {
        printf("\n\tMENU\n");
        printf("1. Nhập 3 số\n");
        printf("2. Tổng 3 số\n");
        printf("3. Trung bình cộng 3 số\n");
        printf("4. Số nhỏ nhất\n");
        printf("5. Số lớn nhất\n");
        printf("6. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số thứ nhất: ");
                scanf("%d", &num1);
                printf("Nhập số thứ hai: ");
                scanf("%d", &num2);
                printf("Nhập số thứ ba: ");
                scanf("%d", &num3);
                isEntered = 1;
                break;

            case 2:
                if (!isEntered) {
                    printf("Bạn chưa nhập 3 số!\n");
                } else {
                    printf("Tổng: %d\n", num1 + num2 + num3);
                }
                break;

            case 3:
                if (!isEntered) {
                    printf("Bạn chưa nhập 3 số!\n");
                } else {
                    float average = (num1 + num2 + num3) / 3.0;
                    printf("Trung bình cộng: %.2f\n", average);
                }
                break;

            case 4:
                if (!isEntered) {
                    printf("Bạn chưa nhập 3 số!\n");
                } else {
                    int min = num1;
                    if (num2 < min) min = num2;
                    if (num3 < min) min = num3;
                    printf("Số nhỏ nhất: %d\n", min);
                }
                break;

            case 5:
                if (!isEntered) {
                    printf("Bạn chưa nhập 3 số!\n");
                } else {
                    int max = num1;
                    if (num2 > max) max = num2;
                    if (num3 > max) max = num3;
                    printf("Số lớn nhất: %d\n", max);
                }
                break;

            case 6:
                printf("Đang thoát chương trình...\n");
                break;

            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
        }

    } while (choice != 6);

    return 0;
}
