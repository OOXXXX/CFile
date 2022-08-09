//
// Created by Patrick on 2022/8/10.
//
#include <stdio.h>

int main() {
    int target = 10, result;

    int a = 1, b = 1, c;
    for (int i = 2; i < target; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    result = c;
    printf("%d\n", result);
}