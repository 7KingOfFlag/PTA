#ifndef __SEARCH_BYNUM_H__
#define __SEARCH_BYNUM_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 
  void chazhao();
void searchnum()									//按学号排列显示学员资料
{
	int y,x;
	char c;
	printf("输入要查询的学生编号:");
	scanf("%d",&y);									//输入要查询的学生编号
	for(x=0;x<50;x++)
	{
		if(y==s[x].bianhao)							//将输入的学生编号与s[x]中编号逐个比较
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
			chazhao();  //---->by yine 这里返回查询主界面
		}
		else if(c=='n'||c=='N')						//若满足该条件则调用chazhao()函数
		{
			break;    //---->by yine 如果不操作则退出
		}
	}
}

#endif
