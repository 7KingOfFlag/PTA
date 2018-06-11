#ifndef __PRINT_STUDENT__
#define __PRINT_STUDENT__
#include <Stdio.h>
#include "struct.h"
void printMseg(student *student){
    printf("%s ",student->ID);
    printf("%s  ",student->name);
    printf("%c  ",student->sex);
    printf("%d  ",student->age);
    printf("%s  ",student->jiGuan);
    printf("%.2f  ",student->score);
    printf("%d  ",student->kaoQing);
    printf("%s  ",student->phoneNumber);
    printf("%s  ",student->ad);
    printf("\n");
}
#endif