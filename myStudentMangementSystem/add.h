#ifndef __LIST_ADD__
#define __LIST_ADD__

#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "list.h"

int sllAdd(Root *root, Node *new_Node)
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

#endif