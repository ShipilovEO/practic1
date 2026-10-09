#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <float.h>


int main(void) {
    int ind;
    uint8_t stat;
    float napr;
    scanf("%x %hho %f", &ind, &stat, &napr);
    uint8_t checksum = ind + stat;
    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %d", ind, stat, (char)stat, napr, checksum);
    return 0; 
}