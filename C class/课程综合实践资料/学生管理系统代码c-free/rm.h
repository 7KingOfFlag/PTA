#ifndef __LIST_RM__
#define __LIST_RM__

#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "search.h"
int sllRm(Root *root, char *ID)
{
	/*
	�Ƴ��������� ѧ�� Ϊ ID ��ѧ��
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
	�ͷŵ�����root
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
		
        printf("����ɾ�����ϵķ�ʽ:\n");					//�����ʾ��Ϣ
        printf("1.ͨ������ɾ��\n");
        printf("2.ͨ��ѧ��ɾ��\n");
        printf("3.����\n");

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
			    printf("������������1-3֮�������\n");
                break;
        }
		
		if (rmNode != NULL) {
			if (rmUI()==TRUE) sllRm(root,rmNode->student.ID);
		}
		
    } while (menu !=3);
} 

int  rmUI(){
	char c;
	printf("�Ƿ�ɾ����ѧԱ��Ϣ ��/Y ��/N \n");
	
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