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
        printf("输入要查找学员的方式:\n");
        printf("1.通过姓名查询:\n");
        printf("2.通过学号查询:\n");
        printf("3.通过显示寻找:\n");
        printf("4.返回主界面\n");

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
			    printf("输入有误，输入1-4之间的数字\n");
                break;
        }
        
    } while (menu !=4);
    
}

int searchFoNmae(const Root *root){
    char searchName[NAMESIZE];
	printf("输入要查询的学员姓名：\n");
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
                    printf("名为%s的学员有：\n    ",searchName);
                    printHaed();
                    isFistFand = FALSE;
                }
                printf("    ");
                printMseg(&(current->student));
			}
			current = current->link;
		}
        if (isFistFand == TRUE) {
            printf("未找到名为%s的学员\n",searchName);
            return FALSE;
        }else{
            return TRUE;
        }
        
	}
}
int searchFoID(const Root *root){
    char searchID[IDSIZE];
	printf("输入要查询的学员学号：\n");
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
        printf("未找到学号为%s的学员",searchID);
        return FALSE;
	}
}

#endif