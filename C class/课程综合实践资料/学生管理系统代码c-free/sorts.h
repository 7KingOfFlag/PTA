void sorts()											//按成绩由高到低显示学员资料
{
	int j,x;
	for(x=0;x<50;x++)
	{
		if(s[x].fenshu==0)									//判断s[x]记录是否为空
		{
			break;
		}
		for(j=0;j<50-x-1;j++)
		{
			if(s[x].fenshu==0)									//判断s[x]记录是否为空
			{
				break;
			}
			if(s[j].fenshu<s[j+1].fenshu)							//根据分数对学生资料排序
			{
				s1=s[j];
				s[j]=s[j+1];
				s[j+1]=s1;
			}
		}
	}
	
	for(j=0; j<50; ++j){
		if(0==s[j].fenshu) break;
		printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[j].bianhao,s[j].n,
			s[j].sex,s[j].age,s[j].jiguan,s[j].fenshu,s[j].kaoqing,s[j].num,s[j].ad);
		printf("\n");
	}
}
