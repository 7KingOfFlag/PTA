#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "list.h"

int main(void)
{
    Root root;
    root.size = 0;
    root.link = NULL;
    Node *new_Node = newNode();
    student st = {"63111701","���",'F',20,"����",47,90,"075586013388","����ʡ�ϲ��а�һ�㳡"};

    strcpy(new_Node->student.ID,"63111702");
	strcpy(new_Node->student.name, "������");
	new_Node->student.sex = 'M';
	new_Node->student.age = 22;
	strcpy(new_Node->student.jiGuan, "����");
	new_Node->student.score = 62.5;
	new_Node->student.kaoQing = 80;
	strcpy(new_Node->student.phoneNumber,"13511007788");
	strcpy(new_Node->student.ad,"���ݶ�ݸ�Ϻ���Ԣ");

    printMseg(&(new_Node->student));
    //printSll(&root);
    return 0;
}


