/*
file : list.c
*/

#include <stdio.h>
#include <stdlib.h>
#define LIST_SIZE 10
#define FALSE 0
#define TRUE 1
typedef struct NODE
{
	struct NODE *link;
	int value;
} Node;
void printSll(Node *head);
Node *MakeSll(int sllSize)
{
	Node *head, *new_Node, *previous;
	int i;
	printf("fist done!\n");

	for (i = 0; i < sllSize; i++)
	{
		new_Node = (Node *)malloc(sizeof(Node));
		if (new_Node == NULL)
		{
			printf("Memory allocation failed");
			return NULL;
		}
		else
		{
			if (i == 0)
			{
				printf("into else\n");
				head = new_Node;
				head->value = sllSize;
				printf("Head node done!!\n Head's value is %d \n", head->value);
			}
			else
			{
				previous->link = new_Node;
				previous->link->value = i;
				printf("The %d node done !! He's path = %x \nThe %d node's value is %d \n", i, new_Node, i, new_Node->value);
			}
			previous = new_Node;
		}

		if (i == sllSize - 1)
		{
			new_Node->link = NULL;
		}
	}
	return head;
}
int sll_insert(Node *current, int new_value)
{
	Node *previous;
	Node *new_Node;

	//寻找插入节点
	while (current->value < new_value)
	{
		previous = current;
		current = current->link;
	}

	//创建新节点并存储新值，如果内存分配失败，函数返回 FALSE
	new_Node = (Node *)malloc(sizeof(Node));

	if (new_Node == NULL)
		return FALSE;
	new_Node->value = new_value;

	//插入新节点
	new_Node->link = current;
	previous->link = new_Node;
	return TRUE;
}

int main(void)
{
	Node *fistSll = MakeSll(10);
	printf("AA\n");
	int i = 0;
	if(sll_insert(fistSll,10) == TRUE)
	{
		fistSll->value++;
		printf("insert value %d\n",10);
		printSll(fistSll);
	}
	return 0;
}

void printSll(Node *head){
	int i;
	if (head == NULL)
	{
		printf("is NULL\n");
	}
	else
	{
		Node *current;
		current = head;
		for (i = 0; i < head->value; i++)
		{
			printf("%d.%d path = %x\n", i, current->value, current);
			current = current->link;
		}
	}
}

