#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main ( int argc ,char **argv)
{
	int a, x;
	printf("vvedite peremennuy");
	scanf("%d", &x);
	a = 64 * (pow(x, 4));
	printf("Rezyltat : %d", a);
}
