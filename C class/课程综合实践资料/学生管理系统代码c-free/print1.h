#ifndef __PRINT_1_H__
#define __PRINT_1_H__
//---->by yine Ϊ�˷�ֹͷ�ļ����ظ������� ��Ҫ�Ӻ궨��

#include <stdio.h>
struct st   											//����ṹ����,�洢ѧԱ��Ϣ
{
	int bianhao;											//ѧ��
	char n[20];											//����
	char sex;											//�Ա�
	int age;												//����
	char jiguan[20];										//����
	float fenshu;											//�ɼ�
	int kaoqing;											//����
	char num[20];										//��ϵ�绰
	char ad[50];											//��ַ
} ;  //---->by yine ����ֱ�Ӷ�����ͷ�ļ��������⣬ �������Դ��ͻ�� һ�㶨����.c�ļ��С�

extern struct st s[50]; //---->by yine ʹ��extern�ⲿ����ʹ������Դ�ļ���ʹ����һ��Դ�ļ����ݡ�

inline void shuchu1(int x)  //---->by yine ͷ�ļ���ʵ��Ҫ�������ؼ��֣� ��ӡ����ѧ����Ϣ����
{
	printf("\n���\t����\t�Ա�\t����\t����\t�ɼ�\t���ڴ���\t�绰����\tסַ\n");
	printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
		s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
}

#endif
