void sorts()											//���ɼ��ɸߵ�����ʾѧԱ����
{
	int j,x;
	for(x=0;x<50;x++)
	{
		if(s[x].fenshu==0)									//�ж�s[x]��¼�Ƿ�Ϊ��
		{
			break;
		}
		for(j=0;j<50-x-1;j++)
		{
			if(s[x].fenshu==0)									//�ж�s[x]��¼�Ƿ�Ϊ��
			{
				break;
			}
			if(s[j].fenshu<s[j+1].fenshu)							//���ݷ�����ѧ����������
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
