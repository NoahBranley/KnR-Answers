#include <stdio.h>

int main()
{
    float fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("\n\nthis is a fahrenheit to celsius converter\naka inferior measurement system to the normal one\n\n");
    while (fahr <= upper) {
        celc = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celc);
        fahr = fahr + step;
    }
    return 0;
}