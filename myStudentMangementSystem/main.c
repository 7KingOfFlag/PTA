#include <Stdio.h>
#include <String.h>
#include "struct.h"
#include "list.h"

int main(void)
{
    Root root;
    root.size = 0;
    root.link = NULL;
    student st = {"63111701","李红",'F',20,"江西",47,90,"075586013388","江西省南昌市八一广场"};
    printMseg(&st);
    sllInsert(root,&st);
    //printSll(&root);
    return 0;
}


