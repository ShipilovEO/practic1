#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>



int main(void) {
    unsigned long long valuesU32 = 
    printf("INT8: size=%ld, min=%d, max=%d, values=%d\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (INT8_MAX - INT8_MIN) + 1);
    printf("UINT8: size=%ld, min=0, max=%u, values=%u\n", sizeof(uint8_t), UINT8_MAX, (UINT8_MAX - 0) + 1);
    printf("INT16: size=%ld, min=%d, max=%d, values=%d\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (INT16_MAX - INT16_MIN) + 1);
    printf("UINT16: size=%ld, min=0, max=%u, values=%u\n", sizeof(uint16_t), UINT16_MAX, (UINT16_MAX - 0) + 1);
    printf("INT32: size=%ld, min=%d, max=%d, values=%-lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX - INT32_MIN + 1);
    printf("UINT32: size=%ld, min=0, max=%u, values=%llu\n", sizeof(uint32_t), UINT32_MAX, ((unsigned long long)UINT32_MAX + 1));


    return 0;
}