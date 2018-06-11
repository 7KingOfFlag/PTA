#include <stdio.h>                              		//����stdio.hͷ�ļ�
#include <windows.h>                              	//��windows.hͷ�ļ�    */
#include <string.h>                                 	//����string.hͷ�ļ�
#include "print1.h"                                 //�����Զ����ļ�print1.cpp
#include "print.h"                                  //�����Զ����ļ�print.cpp
#include "add.h"                                	//�����Զ����ļ�add.cpp
#include "sortf.h"                                  //�����Զ����ļ�sortf.cpp
#include "sorts.h"                                  //�����Զ����ļ�sorts.cpp
#include "sort.h"                                   	//�����Զ����ļ�sort.cpp
#include "search.h"                                 //�����Զ����ļ�search.cpp
#include "searchbynum.h"                                //�����Զ����ļ�searchbynum.cpp
#include "searchbyname.h"                           //�����Զ����ļ�searchbyname.cpp
#include "searchsingle.h"                               //�����Զ����ļ�searchsingle.cpp
#include "insert.h"                                 //�����Զ����ļ�shanchu.cpp
#include "shanchu.h"                                    //�����Զ����ļ�search.cpp
#include "changebyname.h"                           //�����Զ����ļ�insert.cpp
#include "changebynum.h"                            //�����Զ����ļ�changebyname.cpp
#include "xiugai.h"                                 //�����Զ����ļ�xiugai.cpp



#define N 50                        					//����곣��
struct st s1;
struct st s[50];  //---->by yine ����ֱ�Ӷ�����ͷ�ļ��������⣬ �������Դ��ͻ�� һ�㶨����.c�ļ��С�
int x;


void init_data()
{
    memset(s, 0x0, sizeof(s));      /*Ϊ����Ԫ�س�ʼ��Ϊ0��'\0'*/

    s[0].bianhao = 1;
    strncpy(s[0].n ,  "���", sizeof(s[0].n));
    s[0].sex = 'W';
    s[0].age = 20;
    strncpy(s[0].jiguan ,  "����", sizeof(s[0].jiguan));
    s[0].fenshu = 45;
    s[0].kaoqing = 90;
    strncpy(s[0].num ,  "075586013388", sizeof(s[0].num));
    strncpy(s[0].ad ,  "����ʡ�ϲ��а�һ�㳡", sizeof(s[0].ad));

    s[1].bianhao = 2;
    strncpy(s[1].n ,  "������", sizeof(s[1].n));
    s[1].sex = 'M';
    s[1].age = 22;
    strncpy(s[1].jiguan ,  "����", sizeof(s[1].jiguan));
    s[1].fenshu = 62.5;
    s[0].kaoqing = 80;
    strncpy(s[1].num ,  "13511007788", sizeof(s[0].num));
    strncpy(s[1].ad ,  "���ݶ�ݸ�Ϻ���Ԣ", sizeof(s[0].ad));

    s[2].bianhao = 3;
    strncpy(s[2].n ,  "����", sizeof(s[2].n));
    s[2].sex = 'W';
    s[2].age = 24;
    strncpy(s[2].jiguan ,  "����", sizeof(s[2].jiguan));
    s[2].fenshu = 92.5;
    s[2].kaoqing = 75;
    strncpy(s[2].num ,  "13875533445", sizeof(s[2].num));
    strncpy(s[2].ad ,  "���ϳ�ɳ���н�", sizeof(s[2].ad));

    s[3].bianhao = 4;
    strncpy(s[3].n ,  "����", sizeof(s[3].n));
    s[3].sex = 'M';
    s[3].age = 23;
    strncpy(s[3].jiguan ,  "����", sizeof(s[3].jiguan));
    s[3].fenshu = 87;
    s[3].kaoqing = 77;
    strncpy(s[3].num ,  "075588889999", sizeof(s[3].num));
    strncpy(s[3].ad ,  "�����人���нִ��", sizeof(s[3].ad));

    s[4].bianhao = 5;
    strncpy(s[4].n ,  "����", sizeof(s[4].n));
    s[4].sex = 'M';
    s[4].age = 21;
    strncpy(s[4].jiguan ,  "�Ĵ�", sizeof(s[4].jiguan));
    s[4].fenshu = 58;
    s[4].kaoqing = 78;
    strncpy(s[4].num ,  "13675555667", sizeof(s[4].num));
    strncpy(s[4].ad ,  "�Ĵ��ɶ���Ԣ", sizeof(s[4].ad));
    //{                         					//��ʼ��ѧ����Ϣ
    //  {19,"���",'W',20,"����",45,90,"075586013388","����ʡ�ϲ��а�һ�㳡"},
    //  {4,"������",'M',22,"����",62.5,80,"13511007788","���ݶ�ݸ�Ϻ���Ԣ"},
    //  {7,"����",'W',24,"����",92.5,75,"13875533445","���ϳ�ɳ���н�"},
    //  {39,"����",'M',23,"����",87,77,"075588889999","�����人���нִ��"},
    //  {10,"����",'M',21,"�Ĵ�",58,78,"13675555667","�Ĵ��ɶ���Ԣ"}
    //};
}

int main()
{
    //---->by yine ȫ�ֱ����ĳ�ʼ��Ӧ�����������
    init_data();

    for(;;)
    {
    	 int mm=0;
        //����printf()��������򵥵Ĳ˵�
        printf("------------------��ӭ����ѧ������ϵͳ -----------------\n");	
        printf("*****************************************************************\n");
        printf("   1 ���ѧ������ģ�� \n");
        printf("   2 ����ѧ������ģ�� \n");
        printf("   3 �޸�ѧ������ģ�� \n");
        printf("   4 ɾ��ѧ������ģ�� \n");
        printf("   5 �˳�      \n");
        printf("*****************************************************************\n");
        printf("����Ҫ�����ϵͳģ��:");


    	
        scanf(" %d",&mm);
    	
    
        switch(mm)                  						//switch�ṹ
    	{
        case 1:tianjia();                       			//���ѧԱ����
            break;
        case 2:chazhao();                               	//��ѯѧԱ����
            break;
        case 3:xiugai();                            		//�޸�ѧԱ����
            break;
        case 4:shanchu();                       			//ɾ��ѧԱ����
            break;
        case 5: exit(0);                    				//�˳�ϵͳ
    
        default:
            printf("��������������1-5֮�������\n");
    	}


    }

return 1;

}
