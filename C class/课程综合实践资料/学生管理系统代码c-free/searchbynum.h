#ifndef __SEARCH_BYNUM_H__
#define __SEARCH_BYNUM_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 
  void chazhao();
void searchnum()									//��ѧ��������ʾѧԱ����
{
	int y,x;
	char c;
	printf("����Ҫ��ѯ��ѧ�����:");
	scanf("%d",&y);									//����Ҫ��ѯ��ѧ�����
	for(x=0;x<50;x++)
	{
		if(y==s[x].bianhao)							//�������ѧ�������s[x]�б������Ƚ�
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
			chazhao();  //---->by yine ���ﷵ�ز�ѯ������
		}
		else if(c=='n'||c=='N')						//����������������chazhao()����
		{
			break;    //---->by yine ������������˳�
		}
	}
}

#endif
