#include <stdio.h>

int main() {
    int num = 20;
    int *ptr = &num;

    *ptr = 50;

    printf("num = %d", num);

    return 0;
}