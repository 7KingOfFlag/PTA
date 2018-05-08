#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i,count,max=0,max_i,minus;
    printf("How much are you calculate?    ");
    scanf("%d",&count);
    int *arrary = (int*)malloc(sizeof(int)*count);
    for(i = 0; i < count; i++)
    {
        scanf("%d",&arrary[i]);
    }
    
    for( i = 1; i < count; i++)
    {
        minus = arrary[i] - arrary[i-1];
        printf("%d.%d-%d=%d\n",i,arrary[i],arrary[i-1],minus);
        
        if (minus<0) {
            minus = -minus;
        }
        
        
        if (max<minus) {
            max = minus;
            max_i=i;
        } 
    }
    printf("The max minus is %d.%d-%d=%d\n",max_i,arrary[i],arrary[i-1],max);
    return 0;
}
