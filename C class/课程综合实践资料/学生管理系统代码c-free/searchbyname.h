#ifndef __SEARCH_BYNAME_H__
#define __SEARCH_BYNAME_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 

  void searchname()							//�Զ��庯��searchname()
{
	int x;
	char n1[20];
	char c;
	printf("����Ҫ��ѯ��ѧԱ������\n");
	scanf("%s",n1);									//����Ҫ���ҵ�ѧ������
	for(x=0;x<50;x++)
	{
		if(!strcmp(s[x].n,n1))						//�������ѧ��������s[x]����������Ƚ�
		{
			shuchu1(x);								//---->by yine ��Ҫ��������ֵ����ȥ
			break;
		}
	}
	printf("�Ƿ������ѯѧԱ��Ϣ?����Y����������N����");
	while(1)										//ѭ���ж��û��Ƿ����ʹ�øù���
	{
		fflush(stdin);
		scanf(" %c",&c);								//�Ӽ��̻�ȡ�ַ�������c��
		if(c=='y'||c=='Y')							//����������������searchnum()����
		{
			chazhao();								//---->by yine ������������
		}
		else if(c=='n'||c=='N')						//����������������chazhao()����
		{
			break;                                  //---->by yine ������������
		}
	}
}
#endif
