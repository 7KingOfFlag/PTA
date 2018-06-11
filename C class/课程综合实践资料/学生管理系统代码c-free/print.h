#ifndef __PRINT_H__
#define __PRINT_H__

#include <stdio.h>
#include "print1.h"

//void shuchu()											//打印所有成员函数
//{int x;
// printf("\n编号\t姓名\t性别\t年龄\t籍贯\t成绩\t考勤次数\t电话号码\t住址\n");
// for(x=0;x<50;x++)
// {
//  if(s[x].bianhao==0)									//判断s[x]记录是否为空
//  {
//  break;
//  }
//  printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
//  s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
//  printf("\n");
// }
//}

//这里采用冒泡排序法排序，根据学号排序
inline void shuchu()
{
	int t = 0;
	int i,j,k;
	int t0[50] = { 0 };

	int ii=0;
	for(; ii<50; ii++){
		if(s[ii].bianhao==0) break;
		t0[ii] = s[ii].bianhao;
	}

	for(i=0;i<ii;i++) {/* 冒泡法排序 */ 
		for(j=0;j<ii-i-1;j++) {
			if(t0[j]>t0[j+1]) {
				t = t0[j] ;
				t0[j] = t0[j+1] ;
				t0[j+1] = t ;
			}
		}
	}
	printf("\n学号  姓名  性别  年龄  籍贯  成绩 考勤  类型电话  地址");
	for (k=0; k<50; k++)
	{
		int x = t0[k];      //学生编号赋给 x
		if(x==0) break;    //编号若为0，则停止输出

		for(j=0; j<50; j++){
			if(x!=s[j].bianhao) continue; //t0是排序后的数组，S是未排序的数组按排序后的顺序输出数组s
            printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[j].bianhao,s[j].n,
				s[j].sex,s[j].age,s[j].jiguan,s[j].fenshu,s[j].kaoqing,s[j].num,s[j].ad);
			printf("\n");
			break;
		}
	}
}

#endif //__PRINT_H__
