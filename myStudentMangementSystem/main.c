#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "add.h"
#include "search.h"
#include "revamp.h"
#include "rm.h"
void Initialization(Root *root);
int main(void)
{
    Root root;
    root.size = 0;
    Initialization(&root);

	int menu;
	
	do
	{
		printf("------------------欢迎进入学生管理系统 -----------------\n");	
        printf("*****************************************************************\n");
        printf("   1 添加学生资料模块 \n");
        printf("   2 查看学生资料模块 \n");
        printf("   3 修改学生资料模块 \n");
        printf("   4 删除学生资料模块 \n");
        printf("   5 退出      \n");
        printf("*****************************************************************\n");
        printf("输入要进入的系统模块:");
    	

        scanf("%d",&menu);	
    
        switch(menu)                  						//switch结构
    	{
        	case 1:
				AddInformation(&root); 
				break;                      			//添加学员资料
			case 2:
				searchInformation(&root);                               	//查询学员资料
				break;
			 case 3:
			 	revampInformation(&root);                            		//修改学员资料
				 break;
			case 4:
				removeInformation(&root);                       			//删除学员资料
				break;
			case 5: 
				break;                    				//退出系统
			default:
				printf("输入有误，输入1-5之间的数字\n");
				break;
		}
	} while (menu!=5);
	
    return 0;
}

void Initialization(Root *root){
    Node *new_Node,*current;
    new_Node= newNode();
	strcpy(new_Node->student.ID,"63111701");
	strcpy(new_Node->student.name, "李红");
	strcpy(new_Node->student.sex, "女");
	new_Node->student.age = 20;
	strcpy(new_Node->student.jiGuan, "江西");
	new_Node->student.score = 47;
	new_Node->student.kaoQing = 90;
	strcpy(new_Node->student.phoneNumber,"075586013388");
	strcpy(new_Node->student.ad,"江西省南昌市八一广场");

    root->link = new_Node;
    current = new_Node;
    new_Node = newNode();

    strcpy(new_Node->student.ID,"63111702");
	strcpy(new_Node->student.name, "康文明");
	strcpy(new_Node->student.sex, "男");
	new_Node->student.age = 22;
	strcpy(new_Node->student.jiGuan, "广州");
	new_Node->student.score = 62.5;
	new_Node->student.kaoQing = 80;
	strcpy(new_Node->student.phoneNumber,"13511007788");
    strcpy(new_Node->student.ad,"广州东莞南湖公寓");
    
    current->link = new_Node;
    current = current->link;
	new_Node = newNode();
    
    strcpy(new_Node->student.ID,"63111703");
	strcpy(new_Node->student.name, "王吉");
	strcpy(new_Node->student.sex, "女");
	new_Node->student.age = 24;
	strcpy(new_Node->student.jiGuan, "湖南");
	new_Node->student.score = 92.5;
	new_Node->student.kaoQing = 75;
	strcpy(new_Node->student.phoneNumber,"13875533445");
    strcpy(new_Node->student.ad,"湖南长沙步行街");

	current->link = new_Node;
    current = current->link;
	new_Node = newNode();

	strcpy(new_Node->student.ID,"63111704");
	strcpy(new_Node->student.name, "郭家");
	strcpy(new_Node->student.sex, "女");
	new_Node->student.age = 23;
	strcpy(new_Node->student.jiGuan, "湖北");
	new_Node->student.score = 87;
	new_Node->student.kaoQing = 77;
	strcpy(new_Node->student.phoneNumber,"075588889999");
    strcpy(new_Node->student.ad,"湖北武汉步行街大道");
    
	current->link = new_Node;
    current = current->link;
	new_Node = newNode();

	strcpy(new_Node->student.ID,"63111705");
	strcpy(new_Node->student.name, "王宏");
	strcpy(new_Node->student.sex, "女");
	new_Node->student.age = 21;
	strcpy(new_Node->student.jiGuan, "四川");
	new_Node->student.score = 58;
	new_Node->student.kaoQing = 78;
	strcpy(new_Node->student.phoneNumber,"13675555667");
    strcpy(new_Node->student.ad,"四川成都公寓");

    current->link = new_Node;
    current = current->link;
	root->size = 5;
}

"63111703", "王吉", "女", 24, "湖南", 92.5, 75,"13875533445","湖南长沙步行街"
"63111703", "王沧", "女", 21, "湖南", 100, 76,"13875533445","湖南长沙步行街"
