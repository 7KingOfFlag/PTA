#ifndef __ADD_H__
#define __ADD_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨��
#include "print1.h"
  

inline void tianjia()       				//���ѧ����Ϣ����
{
	int x;
	char c;
	shuchu();									//�����������
	for(x=0;x<50;x++)
	{
		if(s[x].bianhao==0)							//�ж�s[x]��¼�Ƿ�Ϊ��
		{
			printf("����Ҫ��ӵ�ѧԱ����:\n");
			printf("����ѧԱ���:");
			scanf("%d",&s[x].bianhao);					//����Ҫ��ӵ�ѧ�����
			printf("\n����ѧԱ����:");
			scanf("%s",s[x].n);							//����Ҫ��ӵ�ѧ������
			printf("\n����ѧԱ�Ա�:");
			scanf("%s", &s[x].sex);						//����Ҫ��ӵ�ѧ���Ա�
			printf("\n����ѧԱ����:");
			scanf("%d",&s[x].age);						//����Ҫ��ӵ�ѧ������
			printf("\n����ѧԱ����:");
			scanf("%s",s[x].jiguan);					//����Ҫ��ӵ�ѧ������
			printf("\n����ѧԱ����:");
			scanf("%f",&s[x].fenshu);					//����Ҫ��ӵ�ѧ������
			printf("\n����ѧԱ���ڴ���:");
			scanf("%d",&s[x].kaoqing);					//����Ҫ��ӵ�ѧ�����ڴ���
			printf("\n����ѧԱ�绰:");
			scanf("%s",s[x].num);						//����Ҫ��ӵ�ѧ���绰
			printf("\n����ѧԱסַ:");
			scanf("%s",s[x].ad);						//����Ҫ��ӵ�ѧ��סַ
			break;
		}
	}
	shuchu();
	printf("�Ƿ�������ѧԱ��Ϣ?����Y����������N����\n");
	while(1)									//ѭ���ж��û��Ƿ����ʹ�øù���
	{
			
		fflush(stdin);
		scanf(" %c",&c);								//�Ӽ��̻�ȡ�ַ�������
		
		 if(c=='y'||c=='Y')								//����������������tianjia()����
		{
			tianjia();		
		}
		else if(c=='n'||c=='N')							//��������������˳�ѭ��
			break;
		
	}
}
#endif //__ADD_H__
