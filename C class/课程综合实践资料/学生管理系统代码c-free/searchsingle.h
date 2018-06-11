#ifndef __SEARCHINGLE_H__
#define __SEARCHINGLE_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 
inline   void searchsingle()									//自定义函数searchsingle()
{
	int y;
	char c;
	printf("选择要查询学员的方式:\n");						//输出提示信息
	printf("1.通过学号排列查找学生资料\n");
	printf("2.通过性别排列查找学生资料\n");
	printf("3.通过成绩高低查找学员资料\n");
	printf("4.通过考勤高低查找学员资料\n");
	printf("5.返回\n");

	scanf("%d",&y);									//从键盘获取数字至变量y中
	switch(y)
	{
	case 1:shuchu();								//按学号排列显示学员资料
		break;
	case 2:sort();									//按性别排列学员资料
		break;
	case 3:sorts();									//按成绩由高到低显示学员资料
		break;
	case 4:sortf();									//按考勤由高到低显示学员资料
		break;
	case 5:chazhao();								//返回查询主界面
		break;
	default:
		printf("输入有误，输入1-5之间的数字\n");
		break;
	}
}
#endif