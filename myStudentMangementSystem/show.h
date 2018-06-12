#ifndef __SHOW__
#define __SHOW__

#include <string.h>
#include "print.h"
void nodePointSwp(Node **a, Node * *b);
void toShow(const Root *root)
{
    void showFoID(const Root *root);
    void showFoName(const Root *root);
    void showFoSEX(const Root *root);
    void showFoscore(const Root *root);
    void showFokaoQing(const Root *root);

    int menu;
    do
    {
        printf("选择要查询学员的方式:\n");
        printf("1.通过学号排列查找学生资料\n");
        printf("2.通过性别排列查找学生资料\n");
        printf("3.通过成绩高低查找学员资料\n");
        printf("4.通过考勤高低查找学员资料\n");
        printf("5.返回\n");

        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            showFoID(root);
            break;
            //        case 2:
            //            showFoSEX();
            //            break;
            //        case 3:
            //            showFoscore();
            //            break;
            //        case 4:
            //            showFokaoQing();
            //            break;
        default:
            printf("输入有误，输入1-5之间的数字\n");
            break;
        }

    } while (menu != 5);
}

void showFoID(const Root *root)
{
    if (root == NULL)
    {
        printf("is NULL\n");
    }
    else
    {
        Node *current = root->link;
        printHaed();
        for (; current->link != NULL; current = current->link)
        {
            printMseg(&(current->student));
        }
    }
}

void showFoName(const Root *root)
{
    if (root == NULL)
    {
        printf("is NULL\n");
    }
    else
    {
        Node *current = root->link;
        int i, flag;
        Node  **nodeList = (Node**)malloc(sizeof(Node) * (root->size));
        for (i = 0; current->link != NULL; current = current->link, i++)
        {
            nodeList[i] = current;
        }

        do
        {
            flag = TRUE;

            for (i = 1; i < root->size; i++)
            {
                if (memcmp(nodeList[i - 1]->student.name, nodeList[i]->student.name, NAMESIZE) > 0)
                {
                    nodePointSwp(&(nodeList[i-1]),&(nodeList[i]));
                    flag = FALSE;
                }
            }

        } while (flag == TRUE);

        for (i = 0; i < root->size; i++)
        {
            printHaed();
            printMseg(&(nodeList[i]->student));
        }
    }
}

void nodePointSwp(Node **a, Node **b)
{
    Node *t = *a;
    *a = *b;
    *b = t;
}

#endif