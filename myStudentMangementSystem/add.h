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
	//Ѱ�Ҳ���ڵ�
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
				printf("ѧ���ظ�\n");
				return FALSE;
			}
			current = current->link;
		}
	}
	//�����½ڵ�
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
		printf("�洢�ռ������޷����!\n");
		return FALSE;
	}
	else
	{
		printf("����Ҫ��ӵ�ѧԱ����:\n");
		printf("����ѧԱ���:");
		scanf("%s", (new_Node->student.ID));
		printf("\n����ѧԱ����:");
		scanf("%s", (new_Node->student.name)); 
		printf("\n����ѧԱ�Ա�:");
		scanf("%s", (new_Node->student.sex)); 
		printf("\n����ѧԱ����:");
		scanf("%d", &(new_Node->student.age)); 
		printf("\n����ѧԱ����:");
		scanf("%s", (new_Node->student.jiGuan)); 
		printf("\n����ѧԱ����:");
		scanf("%lf", &(new_Node->student.score)); 
		printf("\n����ѧԱ���ڴ���:");
		scanf("%d", &(new_Node->student.kaoQing));
		printf("\n����ѧԱ�绰:");
		scanf("%s", (new_Node->student.phoneNumber)); 
		printf("\n����ѧԱסַ:");
		scanf("%s", (new_Node->student.ad)); 
		}
	printf("�������ѧԱ��Ϣ����:\n");
	printHaed();
	printMseg(&(new_Node->student));
	getchar();
	
	char c;
	while (1)
	{
		printf("�Ƿ�ѧԱ��Ϣ�����ϵͳ ��/Y ��/N \n");
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
		printf("�Ƿ�������ѧԱ��Ϣ?����Y����������N����\n");
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