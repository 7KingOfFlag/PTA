#ifndef __PRINT_H__
#define __PRINT_H__

#include <stdio.h>
#include "print1.h"

//void shuchu()											//��ӡ���г�Ա����
//{int x;
// printf("\n���\t����\t�Ա�\t����\t����\t�ɼ�\t���ڴ���\t�绰����\tסַ\n");
// for(x=0;x<50;x++)
// {
//  if(s[x].bianhao==0)									//�ж�s[x]��¼�Ƿ�Ϊ��
//  {
//  break;
//  }
//  printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[x].bianhao,s[x].n,
//  s[x].sex,s[x].age,s[x].jiguan,s[x].fenshu,s[x].kaoqing,s[x].num,s[x].ad);
//  printf("\n");
// }
//}

//�������ð���������򣬸���ѧ������
inline void shuchu()
{
	int t = 0;
	int i,j,k;
	int t0[50] = { 0 };

	int ii=0;
	for(; ii<50; ii++){
		if(s[ii].bianhao==0) break;
		t0[ii] = s[ii].bianhao;
	}

	for(i=0;i<ii;i++) {/* ð�ݷ����� */ 
		for(j=0;j<ii-i-1;j++) {
			if(t0[j]>t0[j+1]) {
				t = t0[j] ;
				t0[j] = t0[j+1] ;
				t0[j+1] = t ;
			}
		}
	}
	printf("\nѧ��  ����  �Ա�  ����  ����  �ɼ� ����  ���͵绰  ��ַ");
	for (k=0; k<50; k++)
	{
		int x = t0[k];      //ѧ����Ÿ��� x
		if(x==0) break;    //�����Ϊ0����ֹͣ���

		for(j=0; j<50; j++){
			if(x!=s[j].bianhao) continue; //t0�����������飬S��δ��������鰴������˳���������s
            printf("\n%d %s %c %d %s %.2f %d %s %s \n",s[j].bianhao,s[j].n,
				s[j].sex,s[j].age,s[j].jiguan,s[j].fenshu,s[j].kaoqing,s[j].num,s[j].ad);
			printf("\n");
			break;
		}
	}
}

#endif //__PRINT_H__
