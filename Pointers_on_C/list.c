/*
file : list.c
*/

#include <stdio.h>
#include <stdlib.h>
#define LIST_SIZE 10
#define FALSE 0
#define TRUE 1
typedef struct NODE
{
    struct NODE *link;
    int value;
} Node;

typedef struct NODEHEAD
{
    struct NODE *link;
    int value;
    int sllSize;
} NodeHead;

NodeHead *MakeSll(int sllSize)
{
    NodeHead *head;
    Node *new_Node, *previous;

    head->sllSize = sllSize;
    int i;
    for (i = 0; i < sllSize; i++)
    {
        new_Node = (Node *)malloc(sizeof(Node));
        if (new_Node == NULL)
        {
            printf("内存分配失败");
            return NULL;
        }
        else if (i == 0)
        {
            head->link = new_Node;
            previous = new_Node;
        }
        else
        {
            previous->link = new_Node;
            previous = new_Node;
        }

        if (i == sllSize - 1)
        {
            new_Node->link = NULL;
        }
    }
    return head;
}
int sll_insert(Node *current, int new_value)
{
    Node *previous;
    Node *new;

    //寻找插入节点
    while (current->value < new_value)
    {
        previous = current;
        current = current->link;
    }

    //创建新节点并存储新值，如果内存分配失败，函数返回 FALSE
    new = (Node *)malloc(sizeof(Node));

    if (new == NULL)
        return FALSE;
    new->value = new_value;

    //插入新节点
    new->link = current;
    previous->link = new;
    return TRUE;
}

int main(void)
{
    NodeHead *fistSll = MakeSll(10);
    printf("AA\n");
    int i=0;
    if (fistSll == NULL)
    {
        printf("is NULL\n");
    }
    else
    {
        Node *current;
        current = fistSll->link;
        while (current->link != NULL)
        {
            printf("%d.%d\n",i,current->value);
            current->link = current->link->link;
            i++;
        }
    }
    return 0;
}
