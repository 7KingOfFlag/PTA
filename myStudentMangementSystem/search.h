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

Node *searchFoNmae(const Root *root){
    /*
    **通过姓名查询学生信息
    */
    char searchName[NAMESIZE];
	printf("输入要查询的学员姓名：\n");
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
        printf("未找到名为%s的学员\n",searchName);
        return NULL;     
	}
}
Node *searchFoID(const Root *root){
    /*
    **通过学号查询学生信息
    */
    char searchID[IDSIZE];
	printf("输入要查询的学员学号：\n");
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
        printf("未找到学号为%s的学员",searchID);
        return NULL;
	}
}

#endif