#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num0, num1;
    scanf("%d %d", &num0, &num1);
    bool nb0 = num0;
    bool nb1 = num1;
    printf("MODULE_READY: %d\n", nb0);
    printf("FAULT_STATE: %d\n", nb1);
    printf("BOOL_SIZE: %ld\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", nb0 + nb1);
    return 0;
}