#ifndef __SORTF_H__
#define __SORTF_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨��

extern struct st s1;
void sortf()											//�������ɸߵ�����ʾѧԱ����
{
	int temp=0,j,x;
	for(x=0;x<50;x++)
	{
		if(s[x].kaoqing==0)								//�ж�s[x]��¼�Ƿ�Ϊ��
		{
			break;
		}
		for(j=0;j<50-x-1;j++)
		{
			if(s[x].kaoqing==0)							//�ж�s[x]��¼�Ƿ�Ϊ��
			{
				break;
			}
			if(s[j].kaoqing<s[j+1].kaoqing)				//���ݿ��ڴ�����ѧ����������
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
