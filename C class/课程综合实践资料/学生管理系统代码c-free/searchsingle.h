#ifndef __SEARCHINGLE_H__
#define __SEARCHINGLE_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨�� 
inline   void searchsingle()									//�Զ��庯��searchsingle()
{
	int y;
	char c;
	printf("ѡ��Ҫ��ѯѧԱ�ķ�ʽ:\n");						//�����ʾ��Ϣ
	printf("1.ͨ��ѧ�����в���ѧ������\n");
	printf("2.ͨ���Ա����в���ѧ������\n");
	printf("3.ͨ���ɼ��ߵͲ���ѧԱ����\n");
	printf("4.ͨ�����ڸߵͲ���ѧԱ����\n");
	printf("5.����\n");

	scanf("%d",&y);									//�Ӽ��̻�ȡ����������y��
	switch(y)
	{
	case 1:shuchu();								//��ѧ��������ʾѧԱ����
		break;
	case 2:sort();									//���Ա�����ѧԱ����
		break;
	case 3:sorts();									//���ɼ��ɸߵ�����ʾѧԱ����
		break;
	case 4:sortf();									//�������ɸߵ�����ʾѧԱ����
		break;
	case 5:chazhao();								//���ز�ѯ������
		break;
	default:
		printf("������������1-5֮�������\n");
		break;
	}
}
#endif