#include<stdio.h>
#include"alloc.h"
#undef malloc

void *alloc(size_t size){
    void *new_mum;

    new_mum = malloc(size);

    
    if (new_mum == NULL) {
       printf("Out of memory!\n");
       exit(1);
    }
    return new_mum;
}