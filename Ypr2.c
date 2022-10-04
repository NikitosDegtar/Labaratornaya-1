#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    float x,y,z,s,r,l,a,o,m,c;
    printf("Введите переменную x:");
    scanf("%f",&x);

    printf("Введите переменную y:");
    scanf("%f",&y);
    
    printf("Введите переменную z:");
    scanf("%f",&z);

    a = fabs(x - y);
    o = (x + 3 * a + x * x);
    s = (a * z  + x * x );
    c = (o / s);
    m = 0.25 * acos(x);
    l = 5 * 1 / atan(x);
    r = (l -  m * c );
    printf("%0.4f",r);
}