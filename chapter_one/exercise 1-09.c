/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
int c;
while ((c = getchar()) != EOF) {
    if (c == ' ') {
        while ((c = getchar()) == ' ');
        putchar(' ');
    }
    putchar(c);
}
return 0;
}
/*used stack overflow and found a good explanation to help me with this one*/
