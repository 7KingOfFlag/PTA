#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "list.h"
#include "print.h"
void Initialization(Root *root);
int main(void)
{
    Root root;
    root.size = 0;
    Initialization(&root);
    printSll(&root);
	Node *new_Node = newNode();

	printSll(&root);
    return 0;
}

void Initialization(Root *root){
    Node *new_Node,*current;
    new_Node= newNode();
    strcpy(new_Node->student.ID,"63111701");
	strcpy(new_Node->student.name, "���");
	strcpy(new_Node->student.sex, "Ů");
	new_Node->student.age = 20;
	strcpy(new_Node->student.jiGuan, "����");
	new_Node->student.score = 47;
	new_Node->student.kaoQing = 90;
	strcpy(new_Node->student.phoneNumber,"075586013388");
	strcpy(new_Node->student.ad,"����ʡ�ϲ��а�һ�㳡");

    root->link = new_Node;
    current = new_Node;
    new_Node = newNode();

    strcpy(new_Node->student.ID,"63111702");
	strcpy(new_Node->student.name, "������");
	strcpy(new_Node->student.sex, "��");
	new_Node->student.age = 22;
	strcpy(new_Node->student.jiGuan, "����");
	new_Node->student.score = 62.5;
	new_Node->student.kaoQing = 80;
	strcpy(new_Node->student.phoneNumber,"13511007788");
    strcpy(new_Node->student.ad,"���ݶ�ݸ�Ϻ���Ԣ");
    
    current->link = new_Node;
    current = current->link;
	new_Node = newNode();
    
    strcpy(new_Node->student.ID,"63111703");
	strcpy(new_Node->student.name, "����");
	strcpy(new_Node->student.sex, "Ů");
	new_Node->student.age = 24;
	strcpy(new_Node->student.jiGuan, "����");
	new_Node->student.score = 92.5;
	new_Node->student.kaoQing = 75;
	strcpy(new_Node->student.phoneNumber,"13875533445");
    strcpy(new_Node->student.ad,"���ϳ�ɳ���н�");

	current->link = new_Node;
    current = current->link;
	new_Node = newNode();

	strcpy(new_Node->student.ID,"63111704");
	strcpy(new_Node->student.name, "����");
	strcpy(new_Node->student.sex, "Ů");
	new_Node->student.age = 23;
	strcpy(new_Node->student.jiGuan, "����");
	new_Node->student.score = 87;
	new_Node->student.kaoQing = 77;
	strcpy(new_Node->student.phoneNumber,"075588889999");
    strcpy(new_Node->student.ad,"�����人���нִ��");
    
	current->link = new_Node;
    current = current->link;
	new_Node = newNode();

	strcpy(new_Node->student.ID,"63111705");
	strcpy(new_Node->student.name, "����");
	strcpy(new_Node->student.sex, "Ů");
	new_Node->student.age = 21;
	strcpy(new_Node->student.jiGuan, "�Ĵ�");
	new_Node->student.score = 58;
	new_Node->student.kaoQing = 78;
	strcpy(new_Node->student.phoneNumber,"13675555667");
    strcpy(new_Node->student.ad,"�Ĵ��ɶ���Ԣ");

    current->link = new_Node;
    current = current->link;
	root->size = 5;
}
