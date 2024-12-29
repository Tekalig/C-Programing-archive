#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d number of argument in the command prompet\n", argc);
    printf("the value main parameter %s\n", argv[0]);
    for (int i = 0; i < argc; i++)
    {
        printf("index:%d value : %s\n", i, argv[i]);
    }
    
    return 0;
}
