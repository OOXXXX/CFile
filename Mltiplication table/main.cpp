//
// Created by Patrick on 2022/8/9.
//
#include <stdio.h>

int main() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            if (i < j) break;
            printf("%d x %d = %-2d ", i, j, i * j);
        }
        printf("\n");
    }
}