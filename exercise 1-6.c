/*verify that the getchar() != EOF is 0 or 1*/
#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}
/*on windows, ^Z is EOF, entering it causes the program to exit*/