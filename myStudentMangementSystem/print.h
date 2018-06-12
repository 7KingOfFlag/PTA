#ifndef __PRINT_STUDENT__
#define __PRINT_STUDENT__
#include <Stdio.h>
#include "struct.h"
void printMseg(student *student){
    printf("%-10s",student->ID);
    printf("%-8s",student->name);
    printf("%-5s",student->sex);
    printf("%-5d",student->age);
    printf("%-5s",student->jiGuan);
    printf("%-7.2f",student->score);
    printf("%-5d",student->kaoQing);
    printf("%-13s",student->phoneNumber);
    printf("%-50s",student->ad);
    printf("\n");
}
void printHaed()
{
	printf("%-10s%-8s%-5s%-5s%-5s%-7s%-5s%-13s%-50s\n","学号","姓名","性别","年龄","籍贯","成绩","考勤","手机号码","住址");
}
#endif