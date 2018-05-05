#include<stdio.h>

typedef struct{
    char *name,*birthday,*six;
    char *phoneNumber,*mobilePhoneNumber;
}phoneList;

int main(void){
    phoneList myList={
        "ChanYongBiao",
        "1998.03.19",
        "man",
        "18867763866",
        "17816115792"};
    printPhoneList(&myList);

    //getchar();
    return 0;
}
void printPhoneList(phoneList *list){
    printf("Name:%s\n",list->name);
    printf("Birthday:%s\n",list->birthday);
    printf("Six:%s\n",list->six);
    printf("PhoneNumber:%s\n",list->phoneNumber);
    printf("MobilePhoneNumber:%s\n",list->mobilePhoneNumber);
}