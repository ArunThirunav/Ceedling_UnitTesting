#include "main.h"

#include <stdio.h>
#include <string.h>



int Appmain(int argc, char const *argv[])
{
    int a = 10;
    int b = printFunc(a);
    printf("%d\n", b);
    return 0;
}