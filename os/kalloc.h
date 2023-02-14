#ifndef KALLOC_H
#define KALLOC_H

#include "types.h"

void *kalloc();
void kfree(void *);
void kinit();

void page_ref_add(uint64 pa, int n);
void page_ref_reduce(uint64 pa, int n);
uint64 page_ref_get(uint64 pa);

#endif // KALLOC_H
