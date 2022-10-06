#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    float x,y,z,s,r,l,a,o,m,c,p;
	printf(" x:"); //Введите переменную
	scanf("%f",&x);

    printf(" y:");
    scanf("%f",&y);
    
    printf(" z:");
    scanf("%f",&z);

    a = fabs(x - y);
    p = pow(x,2);
    o = (x + 3 * a + p);
    s = (a * z  + p );
    c = (o / s);
    m = 0.25 * acos(x);
    l = 5 * atan(x);
    r = (l -  m * c );
    printf("%0.4f",r);
}