//
// Created by Patrick on 2022/8/10.
//
#include <stdio.h>

int main() {
    int arr[10] = {3, 2, 1, 6, 5, 4, 7, 8, 10, 9};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
}