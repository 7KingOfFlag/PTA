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

void printSll(const Node *root);
Node *sllMake(int sllSize);
void sllInitialization(const Node *root, const int *arrary, int arraryLen);
int sllInsert(const Node *root, int new_value);
int sllRm(Node *root, int rm_value, int times);
Node *sllFree(Node *root);
int main(void)
{
	Node *Sll = sllMake(100000);
	int arrary[] = {2, 5, 6, 7, 9, 15, 20};

	sllInitialization(Sll, arrary, sizeof(arrary) / sizeof(int));


	Sll = sllFree(Sll);

	Sll = sllMake(20);

	printSll(Sll);

	return 0;
}

void printSll(const Node *root)
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
		for (i = 0; i < root->value; i++)
		{
			printf("%d.%d path = %x\n", i + 1, current->value, current);
			current = current->link;
		}
		printf("--------------------------------------------\n");
	}
}

Node *sllMake(int sllSize)
{
	/*
	生产一个链表，返回链表头root
	root->value 是链表的大小
	其他节点的值初始化为 0
	*/
	Node *root = NULL, *new_Node = NULL, *previous = NULL;
	int i;

	for (i = 0; i < sllSize + 1; i++)
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
				root = new_Node;
				root->value = sllSize;
			}
			else
			{
				previous->link = new_Node;
				previous->link->value = 0;
			}
			previous = new_Node;
		}

		if (i == sllSize)
		{
			new_Node->link = NULL;
		}
	}
	return root;
}

void sllInitialization(const Node *root, const int *arrary, int arraryLen)
{
	/*
	使用数组arrary中的值初始化链表
	如果链表比数组长则超出的部分链表的值为0
	*/
	Node *current = root->link;
	int i;

	for (i = 0; i < root->value; i++)
	{
		if (i < arraryLen)
			current->value = arrary[i];
		else
			current->value = 0;

		current = current->link;
	}
}

int sllInsert(const Node *root, int new_value)
{
	Node *new_Node, *current;
	current = root->link;
	//寻找插入节点
	while (current->value < new_value && current->link != NULL)
	{
		current = current->link;
	}

	//创建新节点并存储新值，如果内存分配失败，函数返回 FALSE
	new_Node = (Node *)malloc(sizeof(Node));
	if (new_Node == NULL)
		return FALSE;

	new_Node->value = new_value;
	//插入新节点
	new_Node->link = current->link;
	current->link = new_Node;
	return TRUE;
}

int sllRmINValue(Node *root, int rm_value, int times)
{
	/*
	移除单链表中value为rm_value的节点
	times 移除次数 ：
		times > 1 时最多移除 times 次
		times == 0 时 移除所有
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
		
		while(current != NULL){
			previous->link = current->link;
			free(current);
			current = previous->link;
		}
		free(root);
		return NULL;
	}
}
