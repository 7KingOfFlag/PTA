#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[11],birthday[11];
    char six;
    char phoneNumber[16],mobilePhoneNumber[16];
}phoneList;

int main(void){
    int N,i,listLenght;
    scanf("%d",&N);
    phoneList *list = (phoneList*)malloc(sizeof(phoneList)*N);
    listLenght = N;
    for(i=0;i<N;i++){
        scanf("%s %s %c %s %s",
        list[i].name,list[i].birthday,list[i].six,
        list[i].phoneNumber,list[i].mobilePhoneNumber);
    }
    scanf("%d",N);
    int *search = (int*)malloc(sizeof(int)*N);
    for(i=0;i<N;i++){
        scanf("%d",search[i]);
    }

    for(i=0;i<N;i++){
        if(search[i]<listLenght){
            printPhoneList(list[i]);
        }else{
            printf("Not Found");
        }
    }
    return 0;
}
void printPhoneList(phoneList *list){
    printf("1.%s ",list->name);
    printf("2.%s ",list->birthday);
    printf("3.%c ",list->six);
    printf("4.%s ",list->phoneNumber);
    printf("5.%s",list->mobilePhoneNumber);
}