/*reverse the order of the table, 300 to 0*/
#include <stdio.h>

int main()
{
    float fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    while (fahr >= lower) {
        celc = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celc);
        fahr = fahr - step;
    }
    return 0;
}
