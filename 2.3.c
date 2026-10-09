#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num0 = 10;
    int num1 = 010;
    int num2 = 0x10;
    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n", num0, num1, num2);
    printf("INT_SUFFIX: %ld %ld %ld %ld\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %ld %ld %ld\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);
    char str = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %ld %ld %ld\n", sizeof('A'), sizeof(str), sizeof("A"));
    return 0;
}