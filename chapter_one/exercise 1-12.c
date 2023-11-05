/*make a program that prints its input one word per line*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    
        if(c == ' '){
            putchar(c);
            printf("\n");
        }
        else{
            putchar(c);
        }
    
}
/*i dont know how this worked but it did*/