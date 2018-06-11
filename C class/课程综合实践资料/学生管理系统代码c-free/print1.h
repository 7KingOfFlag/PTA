#ifndef __PRINT_1_H__
#define __PRINT_1_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义

#include <stdio.h>
struct st   											//定义结构数组,存储学员信息
{
	int bianhao;											//学号
	char n[20];											//姓名
	char sex;											//性别
	int age;												//年龄
	char jiguan[20];										//籍贯
	float fenshu;											//成绩
	int kaoqing;											//考勤
	char num[20];										//联系电话
	char ad[50];											//地址
} ;  //---->by yine 变量直接定义在头文件里有问题， 会产生资源冲突， 一般定义在.c文件中。

extern struct st s[50]; //---->by yine 使用extern外部引用使其它资源文件里使用另一资源文件内容。

inline void shuchu1(int x)  //---->by yine 头文件里实现要用内联关键字， 打印单个学生信息函数
{
	printf("\n编号\t姓名\t性别\t年龄\t籍贯\t成绩\t考勤次数\t电话号码\t住址\n");
	printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
		s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
}

#endif
