#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[11],birthday[11];
    char six;
    char phoneNumber[16],mobilePhoneNumber[16];
}phoneList;
void printPhoneList(phoneList *list);
int main(void){
    int N,i,listLenght;
    int search[3];
    scanf("%d",&N);
    //phoneList *list = (phoneList*)malloc(sizeof(phoneList)*N);
    phoneList list[3];
    listLenght = N;
    for(i=0;i<N;i++){
        scanf("%s %s %c %s %s",
        list[i].name,list[i].birthday,&list[i].six,
        list[i].phoneNumber,list[i].mobilePhoneNumber);
        printPhoneList(&list[i]);
    }
    scanf("%d",&N);
    //int *search = (int*)malloc(sizeof(int)*N);

    for(i=0;i<N;i++){
        scanf("%d",&search[i]);
    }

    for(i=0;i<N;i++){
        if(search[i]<listLenght){
            printPhoneList(&list[i]);
        }else{
            printf("Not Found");
        }
    }
    //free(phoneList);
    //free(search);
    return 0;
}
void printPhoneList(phoneList *list){
    printf("%s ",list->name);
    printf("%s ",list->birthday);
    printf("%c ",list->six);
    printf("%s ",list->phoneNumber);
    printf("%s",list->mobilePhoneNumber);
}