#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
	double x = 2;
	double a = sin((M_PI / 2) + 3 * x);        // 7.57        0.95
	double b = tan(1.25 * M_PI + 1.5 * x);      //   6.92     0.74
	double c = sin(3 * x - M_PI);               //   2.85     0.28
	double y = (a * (b - c));               //      0.44
	printf("f(x) = %.3f", y);
}

