#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t zeroth_bit = 1 & *reg;
    uint16_t second_bit = 1 & (*reg >> 2);
    uint16_t third_bit = 1 & (*reg >> 3);
    uint16_t fifth_bit = 1 & (*reg >> 5);
    uint16_t new_bit = ((zeroth_bit ^ second_bit) ^ third_bit) ^ fifth_bit;
    *reg = (*reg >> 1) | (new_bit << 15);
}

