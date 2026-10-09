#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>



int main(void) {
    long double num;
    scanf("%Lf", &num);

    float numf = num;

    double numd = num;
    printf("FLOAT: %.6f\nDOUBLE: %lf\nLDOUBLE: %Lf\nFLOAT+1: %.6f\nDOUBLE+1: %lf\nLDOUBLE+1: %Lf", numf, numd, num, numf + 1, numd + 1, num + 1);

    return 0;
}