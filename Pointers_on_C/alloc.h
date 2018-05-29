#include<stdlib.h>

#define malloc
#define MALLOC(num,type) (type *)alloc( (num) * sizof(type))
extern void*alloc (size_t size);