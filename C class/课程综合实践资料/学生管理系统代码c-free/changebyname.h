#ifndef __SCHANGE_BYNAME_H__
#define __SCHANGE_BYNAME_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 
inline  void changebyname()								//输入姓名开始修改
{
	int x;
	char n1[20],c;
	float f;
	int age;											//年龄
	char ji[20];										//籍贯
	int  k;											//考勤
	char num[15];									//联系电话
	char adr[30];										//地址
	int flag=0;
	shuchu();
	printf("输入要修改的学员姓名:");
	scanf("%s",n1);									//输入要修改的学生姓名
	for(x=0;x<50;x++)
	{
		if(strcmp(n1,s[x].n)==0)		//将输入的学生姓名与s[x]中姓名逐个比较
		{
			shuchu1(x);									//若相等则输出
			flag =1;
			break;
		}
	}
	if(flag == 0) return;           //返回主界面
	printf("输入要修改的学员资料:\n");
	printf("输入新的姓名:");
	scanf("%s",s[x].n);									//输入新的学生姓名
	printf("\n输入新的性别:");
	scanf("%s", &s[x].sex);                            //替换原来学生性别
	printf("\n输入新的成绩:");
	scanf("%f",&s[x].fenshu);						//输入新的学生分数
	printf("\n输入新的年龄:");
	scanf("%d",&s[x].age);								//输入新的学生年龄
	printf("\n输入新的籍贯:");
	scanf("%s",s[x].jiguan);                           //输入新的学生籍贯
	printf("\n输入新的考勤:");
	scanf("%d",&s[x].kaoqing);						//输入新的学生考勤次数
	printf("\n输入新的电话:");
	scanf("%s",s[x].num);
	printf("\n输入新的地址:");
	scanf("%s",s[x].ad);                           //输入新的学生住址
	shuchu1(x);
	
	printf("是否继续修改学员信息?输入Y继续，输入N结束");
	while(1)										//循环判断用户是否继续使用该功能
	{
		
		fflush(stdin);
		scanf("%c",&c);									//从键盘获取字符至变量c中
		if(c=='y'||c=='Y')									//若满足该条件则调用changebyname()函数
		{
			changebyname();
		}
		else if(c=='n'||c=='N')								//若满足该条件则退出循环
			break;
	}
}
#endif
