#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "list.h"

int main(void)
{
    Root root;
    root.size = 0;
    root.link = NULL;
    student st = {"63111701","���",'F',20,"����",47,90,"075586013388","����ʡ�ϲ��а�һ�㳡"};
    printMseg(&st);
    sllInsert(root,&st);
    //printSll(&root);
    return 0;
}


