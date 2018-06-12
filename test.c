#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = memcmp("Hello Word!","Hello Word!",sizeof("Hello Word!"));
    printf("%d",a);
    return 0;
}
