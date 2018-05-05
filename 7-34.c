#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[12],birthday[10];
    char six[1];
    char phoneNumber[12],mobilePhoneNumber[14];
}phoneList;

int main(void){
    int N,i;
    scanf("%d",&N);
    printf("your input %d\n",N);
    phoneList *list = (phoneList*)malloc(sizeof(phoneList)*N);
    for(i=0;i<N;i++){
        printf("please key phoneList\n");
        scanf("%s %s %s %s %s",
        list[i].name,list[i].birthday,list[i].six,
        list[i].phoneNumber,list[i].mobilePhoneNumber);
        printf("list insat done!!\n");
    }
    for(i=0;i<N;i++){
        printPhoneList(list[i]);
        printf("\n-------------------\n");
    }
    getchar();
    return 0;
}
void printPhoneList(phoneList *list){
    printf("%s ",list->name);
    printf("%s ",list->birthday);
    printf("%s ",list->six);
    printf("%s ",list->phoneNumber);
    printf("%s",list->mobilePhoneNumber);
}