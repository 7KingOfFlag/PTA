#ifndef __SHOW__
#define __SHOW__

#include <string.h>
#include "print.h"
void nodePointSwp(Node **a, Node **b);
enum showMod
{
    name,
    score,
    kaoQing
};

void toShow(const Root *root)
{
    void showFoID(const Root *root);
    void showFoSEX(const Root *root);
    void show(const Root *root, enum showMod mod);

    int menu;
    do
    {
        printf("选择要查询学员的方式:\n");
        printf("1.通过学号排列查找学生资料\n");
        printf("2.通过姓名排列查找学生资料\n");
        printf("3.通过性别排列查找学生资料\n");
        printf("4.通过成绩高低查找学员资料\n");
        printf("5.通过考勤高低查找学员资料\n");
        printf("6.返回\n");

        scanf("%d", &menu);
        enum showMod mod;
        switch (menu)
        {
        case 1:
            showFoID(root);
            break;
        case 2:
            mod = name;
            show(root, mod);
            break;
        case 3:
            showFoSEX(root);
            break;
        case 4:
            mod = score;
            show(root, mod);
            break;
        case 5:
            mod = kaoQing;
            show(root, mod);
            break;
        default:
            printf("输入有误，输入1-6之间的数字\n");
            break;
        }

    } while (menu != 6);
}
void show(const Root *root, enum showMod mod)
{
    if (root == NULL)
    {
        printf("is NULL\n");
    }
    else
    {
        Node *current = root->link;
        int i, flag;
        Node **nodeList = (Node **)malloc(sizeof(Node) * (root->size));
        for (i = 0; current != NULL; current = current->link, i++)
        {
            nodeList[i] = current;
        }

        do
        {
            flag = TRUE;
            for (i = 1; i < root->size; i++)
            {
                switch (mod)
                {
                case name:
                    if (strcmp(nodeList[i - 1]->student.name, nodeList[i]->student.name) > 0)
                    {
                        nodePointSwp(&(nodeList[i - 1]), &(nodeList[i]));
                        flag = FALSE;
                    }
                    break;
                case score:
                    if (nodeList[i - 1]->student.score < nodeList[i]->student.score)
                    {
                        nodePointSwp(&(nodeList[i - 1]), &(nodeList[i]));
                        flag = FALSE;
                    }
                    break;
                case kaoQing:
                    if (nodeList[i - 1]->student.kaoQing < nodeList[i]->student.kaoQing)
                    {
                        nodePointSwp(&(nodeList[i - 1]), &(nodeList[i]));
                        flag = FALSE;
                    }
                default:
                    break;
                }
            }
        } while (flag != TRUE);

        printHaed();
        for (i = 0; i < root->size; i++)
        {
            printMseg(&(nodeList[i]->student));
        }

        free(nodeList);
    }
}

void showFoID(const Root *root)
{
    if (root == NULL)
    {
        printf("is NULL\n");
    }
    else
    {
        Node *current;
        printHaed();
        for (current = root->link; current != NULL; current = current->link)
        {
            printMseg(&(current->student));
        }
    }
}

void showFoSEX(const Root *root)
{
    if (root == NULL)
    {
        printf("is NULL\n");
    }
    else
    {
        Node *current;

        printHaed();
        for (current = root->link; current != NULL; current = current->link)
        {
            if (strcmp(current->student.sex, "男") == 0)
            {
                printMseg(&(current->student));
            }
        }

        for (current = root->link; current != NULL; current = current->link)
        {
            if (strcmp(current->student.sex, "女") == 0)
            {
                printMseg(&(current->student));
            }
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
