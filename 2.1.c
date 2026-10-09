#include <stdio.h>

int main(void) {
    int num2;
    int num8;
    int num16;


    scanf("%d %x %o", &num2, &num16, &num8);
    printf("UNIT_ID: %d\n", num2);
    printf("UNIT_VERSION: %d\n", num16);
    printf("UNIT_STATUS: %d\n", num8);
    printf("SUM: %d", num16 + num2 + num8);
    return 0;
}