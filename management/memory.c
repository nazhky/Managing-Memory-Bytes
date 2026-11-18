#include <stdio.h>
#include <stdlib.h>
#include "memory.h"

unsigned char *mem_create(size_t size){
    unsigned char *buf = malloc(size);
    if (buf == NULL){
        printf("meemory out\n");
        return NULL;
    }
    return buf;
}

void mem_fill(unsigned char *buf, size_t size, unsigned char value){
    for (size_t i = 0; i < size; i++){
        buf[i] = value;
    }
}
void mem_print(const unsigned char *buf, size_t size){
    for (size_t i = 0; i < size; i++){
        printf("%02X", buf[i]); // this piritns each byte as 2 hex digits
    }
    printf("\n");
}

void mem_destroy(unsigned char *buf){
    free(buf); // gives the byts back
}

int mem_set(unsigned char *buf, size_t size, size_t index, unsigned char value){
    if (index >= size) {
        printf("Index %zu is out of range (size is %zu)\n", index, size);
        return 0;
    }
    buf[index] = value;
    return 1;
}