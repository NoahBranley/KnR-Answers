/*Write a program to count blanks, tabs and newlines*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
int c, nl;

nl = 0;
while ((c = getchar()) != EOF)

  if (c == '\n' ||c == ' ' ||c == '\t')
    ++nl;
  printf("%d\n", nl);

}
