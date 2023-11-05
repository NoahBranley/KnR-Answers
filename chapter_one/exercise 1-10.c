/*Write a program to copy its input to its output, 
replacing each tab by \t, each backspace \b, and each backslash by \\.
this makes tabs visible in an unabgious way*/
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