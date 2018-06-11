#ifndef __SORT_H__
#define __SORT_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义 
inline void sort()										//按性别排列学员资料
{
	int x;
	printf("\n编号\t姓名\t性别\t年龄\t籍贯\t成绩\t考勤次数\t电话号码\t住址\n");
	for(x=0;x<49;x++)
	{
		if(s[x].bianhao==0)								//判断s[x]记录是否为空
			break;
		if(s[x].sex=='m'||s[x].sex=='M')						//输出男生资料
		{
			printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
				s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
			printf("\n");
		}
	}
	for(x=0;x<49;x++)
	{
		if(s[x].bianhao==0)								//判断s[x]记录是否为空
			break;
		if(s[x].sex=='W'||s[x].sex=='w')						//输出女生资料
		{
			printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
				s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
			printf("\n");
		}
	}

}
#endif