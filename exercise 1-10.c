#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if(c == '\t'){
            printf("\\t");
        }
        if(c == '\\'){
            printf("\\");
        }
        if(c == '\b'){
            printf("\b");
        }
        putchar(c);
    }
return 0;
}