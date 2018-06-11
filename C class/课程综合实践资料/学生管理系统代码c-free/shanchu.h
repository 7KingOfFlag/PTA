void shanchu()									//删除函数
{

	char c;											//接收是否确定
	int t,t1,x;											//接收删掉学员学号和计数器
	t=50;
	printf("输入要删除第几个学员资料:");
	scanf("%d",&t1);									//输入要删除的学生位置
	printf("确定删除吗?输入Y确认，输入N退出 ");
	scanf(" %c",&c);									//确定是否删除
	printf("\n编号\t姓名\t性别\t年龄\t籍贯\t成绩\t考勤次数\t电话号码\t住址\n");
	if(c=='y'||c=='Y')
	{
		for(x=t1-1;x<t;x++)								//将要删除学员后的学生资料都向前移动一位
		{
			s[x]=s[x+1];
		}
		for(x=0;x<t-1;x++)
		{
			if(s[x].bianhao==0)								//判断s[x]记录是否为空
			{
				break;
			}
			printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
				s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
		}
		t=t-1;
	}
	else if(c=='n'||c=='N')								//若满足该条件则执行shuchu()函数
	{
		shuchu();
	}
	else
	{
		printf("输入有误！");		
	}
    printf("是否继续删除学员信息?输入Y继续，输入N结束");
	while(1)										//循环判断用户是否继续使用该功能
	{ 

		scanf(" %c",&c);									//从键盘获取字符至变量c中
		if(c=='y'||c=='Y')									//若满足该条件则调用shanchu()函数
		{
			shanchu();
		}
		else if(c=='n'||c=='N')								//若满足该条件则退出循环
			break;
	}
}
