#ifndef __STRUCT__ 
#define __STRUCT__

#include <stdlib.h>

#define FALSE 0 
#define TRUE 1 
#define IDSIZE  9
#define NAMESIZE  20

typedef struct Student
{
    char ID[IDSIZE];  	 	//学号
    char name[NAMESIZE]; 	//姓名
    char sex[3]; 			//性别
    int age; 				//年龄
    char jiGuan[20]; 		//籍贯
	double score; 			//成绩
	int kaoQing; 			//考勤
	char phoneNumber[20]; 	//手机号码
    char ad[50]; 			//地址
}student;

typedef struct NODE
{
	struct NODE *link;
	student student;
} Node;

typedef struct root
{
	struct NODE *link;
	int size;
} Root;

Node *newNode()
{
	Node *new_Node = (Node *)malloc(sizeof(Node));
	if (new_Node == NULL)
		return NULL;

	new_Node->link = NULL;
	return new_Node;
}

#endif
