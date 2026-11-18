#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>

unsigned char *mem_create(size_t size);
void mem_fill(unsigned char *buf, size_t size, unsigned char value); // ts set every byte to 0 to 255
void mem_print(const unsigned char *buf, size_t size);
void mem_destroy(unsigned char *buf);
int mem_set(unsigned char *buf, size_t size, size_t index, unsigned char value);

#endif