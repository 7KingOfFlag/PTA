void shanchu()									//ɾ������
{

	char c;											//�����Ƿ�ȷ��
	int t,t1,x;											//����ɾ��ѧԱѧ�źͼ�����
	t=50;
	printf("����Ҫɾ���ڼ���ѧԱ����:");
	scanf("%d",&t1);									//����Ҫɾ����ѧ��λ��
	printf("ȷ��ɾ����?����Yȷ�ϣ�����N�˳� ");
	scanf(" %c",&c);									//ȷ���Ƿ�ɾ��
	printf("\n���\t����\t�Ա�\t����\t����\t�ɼ�\t���ڴ���\t�绰����\tסַ\n");
	if(c=='y'||c=='Y')
	{
		for(x=t1-1;x<t;x++)								//��Ҫɾ��ѧԱ���ѧ�����϶���ǰ�ƶ�һλ
		{
			s[x]=s[x+1];
		}
		for(x=0;x<t-1;x++)
		{
			if(s[x].bianhao==0)								//�ж�s[x]��¼�Ƿ�Ϊ��
			{
				break;
			}
			printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
				s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
		}
		t=t-1;
	}
	else if(c=='n'||c=='N')								//�������������ִ��shuchu()����
	{
		shuchu();
	}
	else
	{
		printf("��������");		
	}
    printf("�Ƿ����ɾ��ѧԱ��Ϣ?����Y����������N����");
	while(1)										//ѭ���ж��û��Ƿ����ʹ�øù���
	{ 

		scanf(" %c",&c);									//�Ӽ��̻�ȡ�ַ�������c��
		if(c=='y'||c=='Y')									//����������������shanchu()����
		{
			shanchu();
		}
		else if(c=='n'||c=='N')								//��������������˳�ѭ��
			break;
	}
}
