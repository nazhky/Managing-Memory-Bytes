#include <stdio.h>
#include "management/memory.h"

int main(void){
    unsigned char *block = mem_create(16);
    if (block == NULL) return 1;

    mem_fill(block, 8, 0xAB);
    block[0] = 0xFF;
    mem_set(block, 8, 3, 0xFF);
    mem_set(block, 8, 20, 0xFF);
    mem_print(block, 8);

    mem_destroy(block);
    return 0;
}