#ifndef __INSERT_H__
#define __INSERT_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨��
inline void charu()										//����ѧԱ���Ϻ���
{
	int i,x;
	char c;
	printf("����Ҫ����ѧԱ����:\n");
	printf("�����ѧԱ���:");
	scanf("%d",&s1.bianhao);							//����ѧ�����
	printf("\n����ѧԱ����:");
	scanf("%s",s1.n);									//����ѧ������
	printf("\n����ѧԱ�Ա�:");
	scanf("%s",&s1.sex);								//����ѧ���Ա�
	printf("\n����ѧԱ����:");
	scanf("%d",&s1.age);								//����ѧ������
	printf("\n����ѧԱ����:");
	scanf("%s",s1.jiguan);								//����ѧ������
	printf("\n����ѧԱ�ɼ�:");
	scanf("%f",&s1.fenshu);								//����ѧ������
	printf("\n����ѧԱ���ڴ���:");
	scanf("%d",&s1.kaoqing);							//����ѧ�����ڴ���
	printf("\n����ѧԱ����:");
	scanf("%s",s1.num);								//����ѧ������
	printf("\n����ѧԱסַ:");
	scanf("%s",s1.ad);								//����ѧ��סַ
	for(x=0;x<50;x++)
	{
		if(s[x].bianhao==0) {					//������Ϊ0��������λ��
			s[x]=s1;							//��Ԫ�ز���������
			break;
		}
	}

	while(1)										//ѭ���ж��û��Ƿ����ʹ�øù���
	{
		printf("�Ƿ��������ѧԱ��Ϣ?����Y����������N����");
		scanf("%c",&c);									//�Ӽ��̻�ȡ�ַ�������c��
		if(c=='y'||c=='Y')									//����������������charu()����
		{
			charu();
		}
		else if(c=='n'||c=='N')								//��������������˳�ѭ��
			break;
	}
}

#endif //__INSERT_H__
