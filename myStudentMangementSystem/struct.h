#ifndef __STRUCT__ 
#define __STRUCT__

#include <stdlib.h>

#define FALSE 0 
#define TRUE 1 
#define IDSIZE  9
#define NAMESIZE  20

typedef struct Student
{
    char ID[IDSIZE];
    char name[NAMESIZE];
    char sex[3];
    int age;
    char jiGuan[20];
	double score;
	int kaoQing;
	char phoneNumber[20];
    char ad[50];
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
