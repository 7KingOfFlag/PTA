#ifndef __SORT_H__
#define __SORT_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 
inline void sort()										//���Ա�����ѧԱ����
{
	int x;
	printf("\n���\t����\t�Ա�\t����\t����\t�ɼ�\t���ڴ���\t�绰����\tסַ\n");
	for(x=0;x<49;x++)
	{
		if(s[x].bianhao==0)								//�ж�s[x]��¼�Ƿ�Ϊ��
			break;
		if(s[x].sex=='m'||s[x].sex=='M')						//�����������
		{
			printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
				s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
			printf("\n");
		}
	}
	for(x=0;x<49;x++)
	{
		if(s[x].bianhao==0)								//�ж�s[x]��¼�Ƿ�Ϊ��
			break;
		if(s[x].sex=='W'||s[x].sex=='w')						//���Ů������
		{
			printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
				s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
			printf("\n");
		}
	}

}
#endif