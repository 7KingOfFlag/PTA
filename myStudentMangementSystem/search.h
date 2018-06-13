#ifndef __SEARCH__ 
#define __SEARCH__ 
#include<String.h>
#include "print.h"
#include "show.h"

Node *searchFoNmae(const Root *root);
Node *searchFoID(const Root *root);
void searchInformation(const Root *root){
    
    int menu;

    do
    {
        printf("����Ҫ����ѧԱ�ķ�ʽ:\n");
        printf("1.ͨ��������ѯ:\n");
        printf("2.ͨ��ѧ�Ų�ѯ:\n");
        printf("3.ͨ����ʾѰ��:\n");
        printf("4.����������\n");

        scanf("%d",&menu);
        switch (menu)
        {
            case 1:
                searchFoNmae(root);
                break;
            case 2:
                searchFoID(root);
                break;
            case 3:
                toShow(root);
                break;
            case 4:
                break;
            default:
			    printf("������������1-4֮�������\n");
                break;
        }
        
    } while (menu !=4);
    
}

Node *searchFoNmae(const Root *root){
    /*
    **ͨ��������ѯѧ����Ϣ
    */
    char searchName[NAMESIZE];
	printf("����Ҫ��ѯ��ѧԱ������\n");
    scanf("%s",searchName);
	strcpy(searchName, searchName);

    Node *current = root->link;
    
	if (current == NULL)
	{
		return NULL;
	}
	else
	{
		while (current != NULL)
		{
            
			if (strcmp(current->student.name, searchName) == 0)
            {
                printHaed();
                printf("    ");
                printMseg(&(current->student));
                return current;
			}
			current = current->link;
		}
        printf("δ�ҵ���Ϊ%s��ѧԱ\n",searchName);
        return NULL;     
	}
}
Node *searchFoID(const Root *root){
    /*
    **ͨ��ѧ�Ų�ѯѧ����Ϣ
    */
    char searchID[IDSIZE];
	printf("����Ҫ��ѯ��ѧԱѧ�ţ�\n");
    scanf("%s",searchID);

    Node *current = root->link;
    
	if (current == NULL)
	{
		return NULL;
	}
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->student.ID, searchID) == 0)
			{
                printf("    ");                
                printHaed();
                printf("    ");
                printMseg(&(current->student));
				return current;
			}
			current = current->link;
		}
        printf("δ�ҵ�ѧ��Ϊ%s��ѧԱ",searchID);
        return NULL;
	}
}

#endif