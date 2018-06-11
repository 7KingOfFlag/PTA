#ifndef __INSERT_H__
#define __INSERT_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义
inline void charu()										//插入学员资料函数
{
	int i,x;
	char c;
	printf("输入要插入学员资料:\n");
	printf("输入该学员编号:");
	scanf("%d",&s1.bianhao);							//输入学生编号
	printf("\n输入学员姓名:");
	scanf("%s",s1.n);									//输入学生姓名
	printf("\n输入学员性别:");
	scanf("%s",&s1.sex);								//输入学生性别
	printf("\n输入学员年龄:");
	scanf("%d",&s1.age);								//输入学生年龄
	printf("\n输入学员籍贯:");
	scanf("%s",s1.jiguan);								//输入学生籍贯
	printf("\n输入学员成绩:");
	scanf("%f",&s1.fenshu);								//输入学生分数
	printf("\n输入学员考勤次数:");
	scanf("%d",&s1.kaoqing);							//输入学生考勤次数
	printf("\n输入学员号码:");
	scanf("%s",s1.num);								//输入学生号码
	printf("\n输入学员住址:");
	scanf("%s",s1.ad);								//输入学生住址
	for(x=0;x<50;x++)
	{
		if(s[x].bianhao==0) {					//如果编号为0，则插入此位置
			s[x]=s1;							//将元素插入数组中
			break;
		}
	}

	while(1)										//循环判断用户是否继续使用该功能
	{
		printf("是否继续插入学员信息?输入Y继续，输入N结束");
		scanf("%c",&c);									//从键盘获取字符至变量c中
		if(c=='y'||c=='Y')									//若满足该条件则调用charu()函数
		{
			charu();
		}
		else if(c=='n'||c=='N')								//若满足该条件则退出循环
			break;
	}
}

#endif //__INSERT_H__
