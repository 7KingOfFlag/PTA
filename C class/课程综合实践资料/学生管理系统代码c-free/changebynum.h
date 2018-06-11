#ifndef __CHANGE_BYNUM_H__
#define __CHANGE_BYNUM_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 
inline  void changebynum()								//通过编号修改函数
{
	int p=0,q=0,r=0,x=0;       //---->by yine  局部变量在使用前最好初始化，否则会有不定值，影响结果
	char c;
    int flag=0;
	shuchu();
	r=10000;           //---->by yine  这里要规定r的取值范围，否则会有不定值，影响结果
	printf("输入要修改的学员学号:");
	scanf("%d",&p);									//输入要修改的学生编号
	if(p<1||p>r)										//输入错误后，重新进入修改界面
	{
		printf("输入有误,重新输入！");
		changebynum();									//调用changebyname()函数
		return;
	}
	
	for(x=0;x<50;x++)
	{
		if(p==s[x].bianhao)							//将输入的学生姓名与s[x]中姓名逐个比较
		{
			shuchu1(x);									//若相等则输出
			flag =1;
			break;
		}
	}
	if(flag == 0) return;
	printf("输入要修改的学员资料:\n");
	printf("输入新的姓名:");
	scanf("%s",s[x].n);									//输入新的学生姓名
	printf("\n输入新的性别:");
	scanf("%s", &s[x].sex);                              //输入新的学生性别
	printf("\n输入新的成绩:");
	scanf("%f",&s[x].fenshu);							//输入新的学生成绩
	printf("\n输入新的年龄:");
	scanf("%d",&s[x].age);								//输入新的学生年龄
	printf("\n输入新的籍贯:");
	scanf("%s", s[x].jiguan);							//输入新的学生籍贯
	printf("\n输入新的考勤:");
	scanf("%d",&s[x].kaoqing);							//输入新的学生考勤次数
	printf("\n输入新的联系电话:");
	scanf("%s", s[x].num);								//输入新的学生电话
	printf("\n输入新的地址:");
	scanf("%s", s[x].ad);								//输入新的学生住址
	
	printf("是否继续修改学员信息?输入Y继续，输入N结束");
	while(1)										//循环判断用户是否继续使用该功能
	{
	    fflush(stdin);
		scanf(" %c",&c);									//从键盘获取字符至变量c中
		if(c=='y'||c=='Y')									//若满足该条件则调用changebyname()函数
		{
			changebyname();
		}
		else if(c=='n'||c=='N')								//若满足该条件则退出循环
			break;
	}
}
#endif
