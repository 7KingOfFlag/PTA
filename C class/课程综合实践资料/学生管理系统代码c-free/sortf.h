#ifndef __SORTF_H__
#define __SORTF_H__
//---->by yine 为了防止头文件被重复包含， 需要加宏定义

extern struct st s1;
void sortf()											//按考勤由高到低显示学员资料
{
	int temp=0,j,x;
	for(x=0;x<50;x++)
	{
		if(s[x].kaoqing==0)								//判断s[x]记录是否为空
		{
			break;
		}
		for(j=0;j<50-x-1;j++)
		{
			if(s[x].kaoqing==0)							//判断s[x]记录是否为空
			{
				break;
			}
			if(s[j].kaoqing<s[j+1].kaoqing)				//根据考勤次数对学生资料排序
			{
				s1=s[j];
				s[j]=s[j+1];
				s[j+1]=s1;
			}
		}
	}
	
	for(j=0; j<50; ++j){
		if(0==s[j].kaoqing) break;
		printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[j].bianhao,s[j].n,
			s[j].sex,s[j].age,s[j].jiguan,s[j].fenshu,s[j].kaoqing,s[j].num,s[j].ad);
		printf("\n");
	}
}

#endif
