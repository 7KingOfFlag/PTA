#ifndef __ADD_H__
#define __ADD_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义
#include "print1.h"
  

inline void tianjia()       				//添加学生信息函数
{
	int x;
	char c;
	shuchu();									//调用输出函数
	for(x=0;x<50;x++)
	{
		if(s[x].bianhao==0)							//判断s[x]记录是否为空
		{
			printf("输入要添加的学员资料:\n");
			printf("输入学员编号:");
			scanf("%d",&s[x].bianhao);					//输入要添加的学生编号
			printf("\n输入学员姓名:");
			scanf("%s",s[x].n);							//输入要添加的学生姓名
			printf("\n输入学员性别:");
			scanf("%s", &s[x].sex);						//输入要添加的学生性别
			printf("\n输入学员年龄:");
			scanf("%d",&s[x].age);						//输入要添加的学生年龄
			printf("\n输入学员籍贯:");
			scanf("%s",s[x].jiguan);					//输入要添加的学生籍贯
			printf("\n输入学员分数:");
			scanf("%f",&s[x].fenshu);					//输入要添加的学生分数
			printf("\n输入学员考勤次数:");
			scanf("%d",&s[x].kaoqing);					//输入要添加的学生考勤次数
			printf("\n输入学员电话:");
			scanf("%s",s[x].num);						//输入要添加的学生电话
			printf("\n输入学员住址:");
			scanf("%s",s[x].ad);						//输入要添加的学生住址
			break;
		}
	}
	shuchu();
	printf("是否继续添加学员信息?输入Y继续，输入N结束\n");
	while(1)									//循环判断用户是否继续使用该功能
	{
			
		fflush(stdin);
		scanf(" %c",&c);								//从键盘获取字符至变量
		
		 if(c=='y'||c=='Y')								//若满足该条件则调用tianjia()函数
		{
			tianjia();		
		}
		else if(c=='n'||c=='N')							//若满足该条件则退出循环
			break;
		
	}
}
#endif //__ADD_H__
