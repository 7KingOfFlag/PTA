#ifndef __LIST_ADD__
#define __LIST_ADD__

#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "print.h"
int sllAdd(Root *root, Node *new_Node)
{
	Node *current;
	current = root->link;
	//寻找插入节点
	if (current == NULL)
	{
		root->link = new_Node;
		return TRUE;
	}
	else
	{
		while (memcmp(current->student.ID, new_Node->student.ID, IDSIZE) <= 0 && current->link != NULL)
		{
			if (memcmp(current->student.ID, new_Node->student.ID, IDSIZE) == 0)
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
	root->size++;
	return TRUE;
}
int AddInformation(Root *root)
{
	Node *new_Node = newNode();
	if (new_Node == NULL)
	{
		printf("存储空间已满无法添加!\n");
		return FALSE;
	}
	else
	{
		printf("输入要添加的学员资料:\n");
		printf("输入学员编号:");
		scanf("%s", (new_Node->student.ID));
		printf("\n输入学员姓名:");
		scanf("%s", (new_Node->student.name)); 
		printf("\n输入学员性别:");
		scanf("%s", (new_Node->student.sex)); 
		printf("\n输入学员年龄:");
		scanf("%d", &(new_Node->student.age)); 
		printf("\n输入学员籍贯:");
		scanf("%s", (new_Node->student.jiGuan)); 
		printf("\n输入学员分数:");
		scanf("%lf", &(new_Node->student.score)); 
		printf("\n输入学员考勤次数:");
		scanf("%d", &(new_Node->student.kaoQing));
		printf("\n输入学员电话:");
		scanf("%s", (new_Node->student.phoneNumber)); 
		printf("\n输入学员住址:");
		scanf("%s", (new_Node->student.ad)); 
		}
	printf("您输入的学员信息如下:\n");
	printHaed();
	printMseg(&(new_Node->student));
	getchar();
	
	char c;
	while (1)
	{
		printf("是否将学员信息添加至系统 是/Y 否/N \n");
		scanf("%c", &c);

		if (c == 'Y' || c == 'y')
		{
			sllAdd(root, new_Node);
			break;
		}
		else if (c == 'N' || c == 'N')
		{
			break;
		}
	}
	
	getchar();

	while (1)
	{
		printf("是否继续添加学员信息?输入Y继续，输入N结束\n");
		scanf("%c", &c);

		if (c == 'Y' || c == 'y')
		{
			AddInformation(root);
			break;
		}
		else if (c == 'n' || c == 'N')
		{
			break;
		}
	}

	return TRUE;
}

#endif