#ifndef __SEARCH_H__
#define __SEARCH_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 
void searchname();
void searchnum();
inline void searchsingle();
void chazhao()									//��ѯ����
{
	 int y=0;

    printf("����Ҫ����ѧԱ�ķ�ʽ:\n");			//�����ʾ��Ϣ
	printf("1.ͨ��������ѯ:\n");
	printf("2.ͨ��ѧ�Ų�ѯ:\n");
	printf("3.ͨ�������ѯ:\n");
	printf("4.����������\n");

	
	scanf("%d",&y);
	switch(y)
	{
	case 1:searchname();						//����������ѯ
		break;
	case 2:searchnum();							//����ѧ�Ų�ѯ
		break;
	case 3:searchsingle();						//�����ѯ��ʽ
		break;
	case 4:
		break;
	default:
		printf("������������1-4֮�������\n");
		break;
	}
}

#endif
