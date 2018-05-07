#include<stdio.h>
/*
 *	7-38 数列求和-加强版（20 分	）
 *	给定某数字A（1≤A≤9）以及非负整数N（0≤N≤100000），
 *	求数列之和S=A+AA+AAA+⋯+AA⋯A（N个A）。例如A=1, N=3时，S=1+11+111=123。
 *	输入格式：输入数字A与非负整数N。
 *	输出格式：输出其N项数列之和S的值。
 *	输入样例：1 3
 *	输出样例：123
*/

int main(void){
	long sum=0,n,a;
	int i=0,A;
	scanf("%d %ld",&A,&n);
	do{
		if(i!=0){
			a=A+a*10;
		}else if(A==0){
			a=0;
		}else{
			a=A;
		}
	sum+=a;
	i++;
	}while(i<n);
	printf("%ld\n",sum);
	return 0;
}
