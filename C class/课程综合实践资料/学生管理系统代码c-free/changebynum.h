#ifndef __CHANGE_BYNUM_H__
#define __CHANGE_BYNUM_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 
inline  void changebynum()								//ͨ������޸ĺ���
{
	int p=0,q=0,r=0,x=0;       //---->by yine  �ֲ�������ʹ��ǰ��ó�ʼ����������в���ֵ��Ӱ����
	char c;
    int flag=0;
	shuchu();
	r=10000;           //---->by yine  ����Ҫ�涨r��ȡֵ��Χ��������в���ֵ��Ӱ����
	printf("����Ҫ�޸ĵ�ѧԱѧ��:");
	scanf("%d",&p);									//����Ҫ�޸ĵ�ѧ�����
	if(p<1||p>r)										//�����������½����޸Ľ���
	{
		printf("��������,�������룡");
		changebynum();									//����changebyname()����
		return;
	}
	
	for(x=0;x<50;x++)
	{
		if(p==s[x].bianhao)							//�������ѧ��������s[x]����������Ƚ�
		{
			shuchu1(x);									//����������
			flag =1;
			break;
		}
	}
	if(flag == 0) return;
	printf("����Ҫ�޸ĵ�ѧԱ����:\n");
	printf("�����µ�����:");
	scanf("%s",s[x].n);									//�����µ�ѧ������
	printf("\n�����µ��Ա�:");
	scanf("%s", &s[x].sex);                              //�����µ�ѧ���Ա�
	printf("\n�����µĳɼ�:");
	scanf("%f",&s[x].fenshu);							//�����µ�ѧ���ɼ�
	printf("\n�����µ�����:");
	scanf("%d",&s[x].age);								//�����µ�ѧ������
	printf("\n�����µļ���:");
	scanf("%s", s[x].jiguan);							//�����µ�ѧ������
	printf("\n�����µĿ���:");
	scanf("%d",&s[x].kaoqing);							//�����µ�ѧ�����ڴ���
	printf("\n�����µ���ϵ�绰:");
	scanf("%s", s[x].num);								//�����µ�ѧ���绰
	printf("\n�����µĵ�ַ:");
	scanf("%s", s[x].ad);								//�����µ�ѧ��סַ
	
	printf("�Ƿ�����޸�ѧԱ��Ϣ?����Y����������N����");
	while(1)										//ѭ���ж��û��Ƿ����ʹ�øù���
	{
	    fflush(stdin);
		scanf(" %c",&c);									//�Ӽ��̻�ȡ�ַ�������c��
		if(c=='y'||c=='Y')									//����������������changebyname()����
		{
			changebyname();
		}
		else if(c=='n'||c=='N')								//��������������˳�ѭ��
			break;
	}
}
#endif
