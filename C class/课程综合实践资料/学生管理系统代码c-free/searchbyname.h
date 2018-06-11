#ifndef __SEARCH_BYNAME_H__
#define __SEARCH_BYNAME_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 

  void searchname()							//自定义函数searchname()
{
	int x;
	char n1[20];
	char c;
	printf("输入要查询的学员姓名：\n");
	scanf("%s",n1);									//输入要查找的学生姓名
	for(x=0;x<50;x++)
	{
		if(!strcmp(s[x].n,n1))						//将输入的学生姓名与s[x]中姓名逐个比较
		{
			shuchu1(x);								//---->by yine 需要将索引数值传进去
			break;
		}
	}
	printf("是否继续查询学员信息?输入Y继续，输入N结束");
	while(1)										//循环判断用户是否继续使用该功能
	{
		fflush(stdin);
		scanf(" %c",&c);								//从键盘获取字符至变量c中
		if(c=='y'||c=='Y')							//若满足该条件则调用searchnum()函数
		{
			chazhao();								//---->by yine 进查找主界面
		}
		else if(c=='n'||c=='N')						//若满足该条件则调用chazhao()函数
		{
			break;                                  //---->by yine 进操作主界面
		}
	}
}
#endif
