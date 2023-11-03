/*make the f to c conversion chart to a c to f conversion chart*/
#include <stdio.h>
int main()
{
    float fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celc = lower;
    fahr = 32;
    while (fahr <= upper) {
        celc = (5.0/9.0) * (fahr-32.0);
        printf("%6.1f %3.0f\n", celc, fahr);
        fahr = fahr + step;
    }
    return 0;
}
/*i found this exercise very difficult lol, multiple afternoons of just staring at it lmao*/
