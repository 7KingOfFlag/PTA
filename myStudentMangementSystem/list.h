/*
file : list.c
*/
#ifndef __SINGl_LINK_LIST__
#define __SINGl_LINK_LIST__

#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include "struct.h"

#define LIST_SIZE 10
#define FALSE 0
#define TRUE 1

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

const int NodeSize = sizeof(Node);



Node *newNode()
{
	Node *new_Node = (Node *)malloc(sizeof(Node));
	if (new_Node == NULL)
		return NULL;

	new_Node->link = NULL;
	return new_Node;
}

int sllInsert(Root *root, Node *new_Node)
{
	Node *current;
	current = root->link;
	//寻找插入节点
	char RootLInkflag = FALSE;
	if (current == NULL)
	{
		root->link = new_Node;
		return TRUE;
	}
	else
	{
		while (memcmp(current->student.ID, new_Node->student.ID, NodeSize) <= 0 && current->link != NULL)
		{

			if (memcmp(current->student.ID, new_Node->student.ID, NodeSize) == 0)
			{
				printf("学号重复\n");
				return FALSE;
			}
			current = current->link;
		}
	}
	//插入新节点
	new_Node->link = current->link;
	current->link = new_Node;
	root->size ++;
	return TRUE;
}

#if 0
int sllRmINValue(Node *root, int rm_value, int times)
{
	/*
	???????????value?rm_value????
	times ??????? ??
		times > 1 ??????? times ??
		times == 0 ? ???????
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
	释放单链表root
	*/
	if (root == NULL)
	{
		return NULL;
	}
	else
	{
		Node *current = root->link, *previous = root;

		while (current != NULL)
		{
			previous->link = current->link;
			free(current);
			current = previous->link;
		}
		free(root);
		return NULL;
	}
}
#endif
