/*
file : list.c
*/
#ifndef __SINGl_LINK_LIST__
#define __SINGl_LINK_LIST__

#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include "struct.h"
#include "print.h"

#define LIST_SIZE 10
#define FALSE 0
#define TRUE 1

typedef struct NODE
{
	struct NODE *link;
	student student;
} Node;

typedef struct root {
	struct NODE *link;
	int size;
}Root;
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
		for (i = 0; i < root->size; i++)
		{
			printMseg(&(current->student));
			current = current->link;
		}
		printf("--------------------------------------------\n");
	}
}

int sllInsert(Root root, student *new_value)
{
	Node *new_Node, *current;
	current = root.link;
	//Ѱ�Ҳ���ڵ�
	char RootLInkflag = FALSE;
	if (current != NULL ) {
		RootLInkflag = TRUE;
	}else{
	while ( memcmp(current->student.ID,new_value->ID,sizeof(new_value->ID)) <= 0 
				&& current->link != NULL){
			if (memcmp(current->student.ID,new_value->ID,sizeof(new_value->ID)) == 0) {
				printf("ѧ���ظ�\n");
				return FALSE;
			}
			current = current->link;
		}
	}
	
	//�����½ڵ㲢�洢��ֵ������ڴ����ʧ�ܣ��������� FALSE
	new_Node = (Node *)malloc(sizeof(Node));
	if (new_Node == NULL)
		return FALSE;

	printf("1.ok");
	//���½ڵ㸳ֵ
	strcpy(new_Node->student.ID,new_value->ID);
	strcpy(new_Node->student.name,new_value->name);
	new_Node->student.sex = new_value->sex;
	new_Node->student.age = new_value->age;
	strcpy(new_Node->student.jiGuan,new_value->jiGuan);
	new_Node->student.score = new_value->score;
	new_Node->student.kaoQing = new_value->kaoQing;
	strcpy(new_Node->student.phoneNumber,new_value->phoneNumber);
	strcpy(new_Node->student.ad,new_value->ad);
	printf("2.ok");
	//�����½ڵ�
	
	if (RootLInkflag == TRUE) {
		new_Node->link = NULL;
		root->link = new_Node;
	}
	
	new_Node->link = current->link;
	current->link = new_Node;
	return TRUE;
}
#if false
int sllRmINValue(Node *root, int rm_value, int times)
{
	/*
	�Ƴ���������valueΪrm_value�Ľڵ�
	times �Ƴ����� ��
		times > 1 ʱ����Ƴ� times ��
		times == 0 ʱ �Ƴ�����
	*/

	if (root->link == NULL)
		return FALSE;

	Node *current = root->link;
	Node *previous = root;
	int flag = 0;
	while (current != NULL)
	{
		if (current->value == rm_value)
		{
			if (times == 0 || flag < times)
			{
				previous->link = current->link;
				free(current);
				current = previous->link;
				flag++;
				root->value = root->value - 1;
			}
			else
				break;
		}
		else
		{
			previous = current;
			current = current->link;
		}
	}
	return TRUE;
}
#endif
Node *sllFree(Node *root)
{
	/*
	�ͷŵ�����root
	*/
	if (root == NULL)
	{
		return NULL;
	}
	else
	{
		Node *current = root->link, *previous = root;
		
		while(current != NULL){
			previous->link = current->link;
			free(current);
			current = previous->link;
		}
		free(root);
		return NULL;
	}
}
#endif