#include <stdio.h>

void bubble_sort(int arr[], int m) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m;

    printf("Nhập số dòng (n): ");
    scanf("%d", &n);
    printf("Nhập số cột (m): ");
    scanf("%d", &m);

    int arr[n][m];

    printf("Nhập giá trị các phần tử mảng:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        bubble_sort(arr[i], m);
    }

    printf("Mảng sau khi sắp xếp tăng dần theo từng dòng:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
