#ifndef __REVAMP__
#define __REVAMP__

#include "add.h"
#include "search.h"

void revampInformation(Root *root){
    int revamp(Node *revampNode);

    int menu;
    do
    {
        printf("输入修改学员资料的方式:\n");					//输出提示信息
        printf("1.通过姓名查找修改\n");
        printf("2.通过学号查找修改\n");
        printf("3.返回\n");

        scanf("%d",&menu);
        Node *revampNode;
        switch (menu)
        {
            case 1:
                revampNode =  searchFoNmae(root);
                revamp(revampNode);
                break;
            case 2:
                revampNode = searchFoID(root);
                revamp(revampNode);
                break;
            default:
			    printf("输入有误，输入1-3之间的数字\n");
                break;
        }   
    } while (menu !=3);
}

int revamp(Node *revampNode){
    char c;
    while (1)
	{
		printf("是否修改学员信息 是/Y 否/N \n");
		scanf("%c", &c);

		if (c == 'Y' || c == 'y')
		{
            printf("输入要修改的学员资料:\n");
            printf("\nn修改前学员姓名 :%s 修改后学员姓名:",revampNode->student.name);
            scanf("%s", (revampNode->student.name)); 
            printf("\n修改前学员性别 :%s 修改后学员性别:",revampNode->student.sex);
            scanf("%s", (revampNode->student.sex)); 
            printf("\n修改前学员年龄 :%d 修改后学员年龄:",revampNode->student.age);
            scanf("%d", &(revampNode->student.age)); 
            printf("\n修改前学员籍贯 :%s 修改后学员籍贯:",revampNode->student.jiGuan);
            scanf("%s", (revampNode->student.jiGuan)); 
            printf("\n修改前学员分数 :%f 修改后学员分数:",revampNode->student.score);
            scanf("%lf", &(revampNode->student.score)); 
            printf("\n修改前学员考勤次数 :%d 修改后学员考勤次数:",revampNode->student.kaoQing);
            scanf("%d", &(revampNode->student.kaoQing));
            printf("\n修改前学员电话 :%s 修改后学员电话:",revampNode->student.phoneNumber);
            scanf("%s", (revampNode->student.phoneNumber)); 
            printf("\n修改前学员住址 :%s 修改后学员住址:",revampNode->student.ad);
            scanf("%s", (revampNode->student.ad));
            printf("您修改后的学员信息如下:\n");
	        printHaed();
	        printMseg(&(revampNode->student)); 
			break;
		}
		else if (c == 'n' || c == 'N')
		{
			break;
		}
	}
}
#endif
