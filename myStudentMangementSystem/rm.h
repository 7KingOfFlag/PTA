#ifndef __LIST_RM__
#define __LIST_RM__

#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "search.h"
int sllRm(Root *root, char *ID)
{
	/*
	移除单链表中 学号 为 ID 的学生
	*/
	Node *current = root->link;
	Node *previous = NULL;
	while (current != NULL)
	{
		if (memcmp(current->student.ID,ID,IDSIZE) == 0)
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

void removeInformation(Root *root){
	int rmUI();
	int menu;
    do
    {
		
        printf("输入删除资料的方式:\n");					//输出提示信息
        printf("1.通过姓名删除\n");
        printf("2.通过学号删除\n");
        printf("3.返回\n");

        scanf("%d",&menu);
        Node *rmNode = NULL;
        switch (menu)
        {
            case 1:
                rmNode =  searchFoNmae(root);
                break;
            case 2:
                rmNode = searchFoID(root);
                break;
            default:
			    printf("输入有误，输入1-3之间的数字\n");
                break;
        }
		
		if (rmNode != NULL) {
			if (rmUI()==TRUE) sllRm(root,rmNode->student.ID);
		}
		
    } while (menu !=3);
} 

int  rmUI(){
	char c;
	printf("是否删除该学员信息 是/Y 否/N \n");
	
	while(1){
		scanf("%c", &c);
		
		if (c == 'Y' || c == 'y') {
			return TRUE;
		}else if (c == 'n' || c == 'N'){
			return FALSE;
		}
	}
	
}
#endif