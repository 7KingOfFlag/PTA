#include <stdio.h>                              		//包含stdio.h头文件
#include <windows.h>                              	//艾windows.h头文件    */
#include <string.h>                                 	//包含string.h头文件
#include "print1.h"                                 //包含自定义文件print1.cpp
#include "print.h"                                  //包含自定义文件print.cpp
#include "add.h"                                	//包含自定义文件add.cpp
#include "sortf.h"                                  //包含自定义文件sortf.cpp
#include "sorts.h"                                  //包含自定义文件sorts.cpp
#include "sort.h"                                   	//包含自定义文件sort.cpp
#include "search.h"                                 //包含自定义文件search.cpp
#include "searchbynum.h"                                //包含自定义文件searchbynum.cpp
#include "searchbyname.h"                           //包含自定义文件searchbyname.cpp
#include "searchsingle.h"                               //包含自定义文件searchsingle.cpp
#include "insert.h"                                 //包含自定义文件shanchu.cpp
#include "shanchu.h"                                    //包含自定义文件search.cpp
#include "changebyname.h"                           //包含自定义文件insert.cpp
#include "changebynum.h"                            //包含自定义文件changebyname.cpp
#include "xiugai.h"                                 //包含自定义文件xiugai.cpp



#define N 50                        					//定义宏常量
struct st s1;
struct st s[50];  //---->by yine 变量直接定义在头文件里有问题， 会产生资源冲突， 一般定义在.c文件中。
int x;


void init_data()
{
    memset(s, 0x0, sizeof(s));      /*为数组元素初始化为0或'\0'*/

    s[0].bianhao = 1;
    strncpy(s[0].n ,  "李红", sizeof(s[0].n));
    s[0].sex = 'W';
    s[0].age = 20;
    strncpy(s[0].jiguan ,  "江西", sizeof(s[0].jiguan));
    s[0].fenshu = 45;
    s[0].kaoqing = 90;
    strncpy(s[0].num ,  "075586013388", sizeof(s[0].num));
    strncpy(s[0].ad ,  "江西省南昌市八一广场", sizeof(s[0].ad));

    s[1].bianhao = 2;
    strncpy(s[1].n ,  "康文明", sizeof(s[1].n));
    s[1].sex = 'M';
    s[1].age = 22;
    strncpy(s[1].jiguan ,  "广州", sizeof(s[1].jiguan));
    s[1].fenshu = 62.5;
    s[0].kaoqing = 80;
    strncpy(s[1].num ,  "13511007788", sizeof(s[0].num));
    strncpy(s[1].ad ,  "广州东莞南湖公寓", sizeof(s[0].ad));

    s[2].bianhao = 3;
    strncpy(s[2].n ,  "王吉", sizeof(s[2].n));
    s[2].sex = 'W';
    s[2].age = 24;
    strncpy(s[2].jiguan ,  "湖南", sizeof(s[2].jiguan));
    s[2].fenshu = 92.5;
    s[2].kaoqing = 75;
    strncpy(s[2].num ,  "13875533445", sizeof(s[2].num));
    strncpy(s[2].ad ,  "湖南长沙步行街", sizeof(s[2].ad));

    s[3].bianhao = 4;
    strncpy(s[3].n ,  "郭家", sizeof(s[3].n));
    s[3].sex = 'M';
    s[3].age = 23;
    strncpy(s[3].jiguan ,  "湖北", sizeof(s[3].jiguan));
    s[3].fenshu = 87;
    s[3].kaoqing = 77;
    strncpy(s[3].num ,  "075588889999", sizeof(s[3].num));
    strncpy(s[3].ad ,  "湖北武汉步行街大道", sizeof(s[3].ad));

    s[4].bianhao = 5;
    strncpy(s[4].n ,  "王宏", sizeof(s[4].n));
    s[4].sex = 'M';
    s[4].age = 21;
    strncpy(s[4].jiguan ,  "四川", sizeof(s[4].jiguan));
    s[4].fenshu = 58;
    s[4].kaoqing = 78;
    strncpy(s[4].num ,  "13675555667", sizeof(s[4].num));
    strncpy(s[4].ad ,  "四川成都公寓", sizeof(s[4].ad));
    //{                         					//初始化学生信息
    //  {19,"李红",'W',20,"江西",45,90,"075586013388","江西省南昌市八一广场"},
    //  {4,"康文明",'M',22,"广州",62.5,80,"13511007788","广州东莞南湖公寓"},
    //  {7,"王吉",'W',24,"湖南",92.5,75,"13875533445","湖南长沙步行街"},
    //  {39,"郭家",'M',23,"湖北",87,77,"075588889999","湖北武汉步行街大道"},
    //  {10,"王宏",'M',21,"四川",58,78,"13675555667","四川成都公寓"}
    //};
}

int main()
{
    //---->by yine 全局变量的初始化应放在主方法里。
    init_data();

    for(;;)
    {
    	 int mm=0;
        //利用printf()函数输出简单的菜单
        printf("------------------欢迎进入学生管理系统 -----------------\n");	
        printf("*****************************************************************\n");
        printf("   1 添加学生资料模块 \n");
        printf("   2 查找学生资料模块 \n");
        printf("   3 修改学生资料模块 \n");
        printf("   4 删除学生资料模块 \n");
        printf("   5 退出      \n");
        printf("*****************************************************************\n");
        printf("输入要进入的系统模块:");


    	
        scanf(" %d",&mm);
    	
    
        switch(mm)                  						//switch结构
    	{
        case 1:tianjia();                       			//添加学员资料
            break;
        case 2:chazhao();                               	//查询学员资料
            break;
        case 3:xiugai();                            		//修改学员资料
            break;
        case 4:shanchu();                       			//删除学员资料
            break;
        case 5: exit(0);                    				//退出系统
    
        default:
            printf("输入有误，请输入1-5之间的数字\n");
    	}


    }

return 1;

}
