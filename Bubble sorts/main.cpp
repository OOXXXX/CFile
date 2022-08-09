//
// Created by Patrick on 2022/8/10.
//
#include <stdio.h>

int main() {
    int a[10] = {1, 3, 5, 7, 2, 6, 4, 8, 10, 9};
    int i, j, temp;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}