#ifndef __LIST_RM__
#define __LIST_RM__

#include <Stdio.h>
#include <String.h>
#include "struct.h"

int sllRm(Root *root, char *ID)
{
	/*
	移除单链表中 学号 为 ID 的学生
	*/
	Node *current = root->link;
	Node *previous = NULL;
	while (current != NULL)
	{
		if (memcmp(current->student.ID,ID,IDSize) == 0)
		{
			
			if (current == root->link) {
				root->link = current->link;
			}else{
				previous->link = current->link;
			}
			
			free(current);
			root->size-=1;
			return TRUE;
		}
		else
		{
			previous = current;
			current = current->link;
		}
	}
	return FALSE;
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