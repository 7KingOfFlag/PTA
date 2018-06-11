#ifndef __PRINT_STUDENT__
#define __PRINT_STUDENT__
#include <Stdio.h>
#include "struct.h"
#include "list.h"
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

void printSll(const Root *root)
{
	int i;
	if (root == NULL)
	{
		printf("is NULL\n");
	}
	else
	{
		Node *current;
		current = root->link;
		printf("%-10s%-8s%-5s%-5s%-5s%-7s%-5s%-13s%-50s\n",
				"ѧ��","����","�Ա�","����","����","�ɼ�","����","�ֻ�����","��ַ");
		for (i = 0; i < root->size; i++)
		{
			printMseg(&(current->student));
			current = current->link;
		}
		printf("---------------------------------------------------------------------------\n");
	}
}


#endif