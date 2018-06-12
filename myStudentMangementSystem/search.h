#ifndef __SEARCH__ 
#define __SEARCH__ 

#include "print.h"
#include "show.h"

void searchInformation(const Root *root){
    int searchFoNmae(const Root *root);
    int searchFoID(const Root *root);
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

int searchFoNmae(const Root *root){
    char searchName[NAMESIZE];
	printf("����Ҫ��ѯ��ѧԱ������\n");
    scanf("%s",searchName);
	strcpy(searchName, searchName);

    Node *current = root->link;
    
	if (current == NULL)
	{
		return FALSE;
	}
	else
	{
        int isFistFand = TRUE;
		while (current->link != NULL)
		{
            printf("a = %s  b = %s memcmp = %d\n",current->student.name,searchName,memcmp(current->student.name, searchName, sizeof(searchName)));
            
			if (memcmp(current->student.name, searchName, sizeof(searchName)) == 0)
			{
                if (isFistFand == TRUE) {
                    printf("��Ϊ%s��ѧԱ�У�\n    ",searchName);
                    printHaed();
                    isFistFand = FALSE;
                }
                printf("    ");
                printMseg(&(current->student));
			}
			current = current->link;
		}
        if (isFistFand == TRUE) {
            printf("δ�ҵ���Ϊ%s��ѧԱ\n",searchName);
            return FALSE;
        }else{
            return TRUE;
        }
        
	}
}
int searchFoID(const Root *root){
    char searchID[IDSIZE];
	printf("����Ҫ��ѯ��ѧԱѧ�ţ�\n");
    scanf("%s",searchID);

    Node *current = root->link;
    
	if (current == NULL)
	{
		return FALSE;
	}
	else
	{
		while (current->link != NULL)
		{
			if (memcmp(current->student.ID, searchID, IDSIZE) == 0)
			{
                printf("    ");                
                printHaed();
                printf("    ");
                printMseg(&(current->student));
				return TRUE;
			}
			current = current->link;
		}
        printf("δ�ҵ�ѧ��Ϊ%s��ѧԱ",searchID);
        return FALSE;
	}
}

#endif