#ifndef __SCHANGE_BYNAME_H__
#define __SCHANGE_BYNAME_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 
inline  void changebyname()								//����������ʼ�޸�
{
	int x;
	char n1[20],c;
	float f;
	int age;											//����
	char ji[20];										//����
	int  k;											//����
	char num[15];									//��ϵ�绰
	char adr[30];										//��ַ
	int flag=0;
	shuchu();
	printf("����Ҫ�޸ĵ�ѧԱ����:");
	scanf("%s",n1);									//����Ҫ�޸ĵ�ѧ������
	for(x=0;x<50;x++)
	{
		if(strcmp(n1,s[x].n)==0)		//�������ѧ��������s[x]����������Ƚ�
		{
			shuchu1(x);									//����������
			flag =1;
			break;
		}
	}
	if(flag == 0) return;           //����������
	printf("����Ҫ�޸ĵ�ѧԱ����:\n");
	printf("�����µ�����:");
	scanf("%s",s[x].n);									//�����µ�ѧ������
	printf("\n�����µ��Ա�:");
	scanf("%s", &s[x].sex);                            //�滻ԭ��ѧ���Ա�
	printf("\n�����µĳɼ�:");
	scanf("%f",&s[x].fenshu);						//�����µ�ѧ������
	printf("\n�����µ�����:");
	scanf("%d",&s[x].age);								//�����µ�ѧ������
	printf("\n�����µļ���:");
	scanf("%s",s[x].jiguan);                           //�����µ�ѧ������
	printf("\n�����µĿ���:");
	scanf("%d",&s[x].kaoqing);						//�����µ�ѧ�����ڴ���
	printf("\n�����µĵ绰:");
	scanf("%s",s[x].num);
	printf("\n�����µĵ�ַ:");
	scanf("%s",s[x].ad);                           //�����µ�ѧ��סַ
	shuchu1(x);
	
	printf("�Ƿ�����޸�ѧԱ��Ϣ?����Y����������N����");
	while(1)										//ѭ���ж��û��Ƿ����ʹ�øù���
	{
		
		fflush(stdin);
		scanf("%c",&c);									//�Ӽ��̻�ȡ�ַ�������c��
		if(c=='y'||c=='Y')									//����������������changebyname()����
		{
			changebyname();
		}
		else if(c=='n'||c=='N')								//��������������˳�ѭ��
			break;
	}
}
#endif
