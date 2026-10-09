#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>



int main(void) {
    uint8_t num;
    scanf("%hhu", &num);

    uint8_t nnum = num;
    printf("ADD: %hhu\n", nnum + 10);

    nnum = num;
    printf("MUL2: %hhu\n", nnum * 2);

    nnum = num;
    printf("SQR: %hhu\n", nnum * nnum);

    return 0;
}