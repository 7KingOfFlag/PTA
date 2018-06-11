#ifndef __SEARCH_H__
#define __SEARCH_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 
void searchname();
void searchnum();
inline void searchsingle();
void chazhao()									//查询函数
{
	 int y=0;

    printf("输入要查找学员的方式:\n");			//输出提示信息
	printf("1.通过姓名查询:\n");
	printf("2.通过学号查询:\n");
	printf("3.通过特殊查询:\n");
	printf("4.返回主界面\n");

	
	scanf("%d",&y);
	switch(y)
	{
	case 1:searchname();						//输入姓名查询
		break;
	case 2:searchnum();							//输入学号查询
		break;
	case 3:searchsingle();						//特殊查询方式
		break;
	case 4:
		break;
	default:
		printf("输入有误，输入1-4之间的数字\n");
		break;
	}
}

#endif
