#ifndef __REVAMP__
#define __REVAMP__

#include "add.h"
#include "search.h"

void revampInformation(Root *root){
    int revamp(Node *revampNode);

    int menu;
    do
    {
        printf("�����޸�ѧԱ���ϵķ�ʽ:\n");					//�����ʾ��Ϣ
        printf("1.ͨ�����������޸�\n");
        printf("2.ͨ��ѧ�Ų����޸�\n");
        printf("3.����\n");

        scanf("%d",&menu);
        Node *revampNode;
        switch (menu)
        {
            case 1:
                revampNode =  searchFoNmae(root);
                revamp(revampNode);
                break;
            case 2:
                revampNode = searchFoID(root);
                revamp(revampNode);
                break;
            default:
			    printf("������������1-3֮�������\n");
                break;
        }   
    } while (menu !=3);
}

int revamp(Node *revampNode){
    char c;
    while (1)
	{
		printf("�Ƿ��޸�ѧԱ��Ϣ ��/Y ��/N \n");
		scanf("%c", &c);

		if (c == 'Y' || c == 'y')
		{
            printf("����Ҫ�޸ĵ�ѧԱ����:\n");
            printf("\nn�޸�ǰѧԱ���� :%s �޸ĺ�ѧԱ����:",revampNode->student.name);
            scanf("%s", (revampNode->student.name)); 
            printf("\n�޸�ǰѧԱ�Ա� :%s �޸ĺ�ѧԱ�Ա�:",revampNode->student.sex);
            scanf("%s", (revampNode->student.sex)); 
            printf("\n�޸�ǰѧԱ���� :%d �޸ĺ�ѧԱ����:",revampNode->student.age);
            scanf("%d", &(revampNode->student.age)); 
            printf("\n�޸�ǰѧԱ���� :%s �޸ĺ�ѧԱ����:",revampNode->student.jiGuan);
            scanf("%s", (revampNode->student.jiGuan)); 
            printf("\n�޸�ǰѧԱ���� :%f �޸ĺ�ѧԱ����:",revampNode->student.score);
            scanf("%lf", &(revampNode->student.score)); 
            printf("\n�޸�ǰѧԱ���ڴ��� :%d �޸ĺ�ѧԱ���ڴ���:",revampNode->student.kaoQing);
            scanf("%d", &(revampNode->student.kaoQing));
            printf("\n�޸�ǰѧԱ�绰 :%s �޸ĺ�ѧԱ�绰:",revampNode->student.phoneNumber);
            scanf("%s", (revampNode->student.phoneNumber)); 
            printf("\n�޸�ǰѧԱסַ :%s �޸ĺ�ѧԱסַ:",revampNode->student.ad);
            scanf("%s", (revampNode->student.ad));
            printf("���޸ĺ��ѧԱ��Ϣ����:\n");
	        printHaed();
	        printMseg(&(revampNode->student)); 
			break;
		}
		else if (c == 'n' || c == 'N')
		{
			break;
		}
	}
}
#endif
