#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	float x1;
	float x2;
	float y1;
	float y2;
	float r1;
	float r2;
	puts("Введите координаты первой окружности и радиус");
	scanf("%f %f %f", &x1, &y1, &r1);
	puts("Введите координаты первой окружности и радиус");
	scanf("%f %f %f", &x2, &y2, &r2);
	double katet1 = fabs(x1 - y2);
	double katet2 = fabs(x2 - y1);
	double gipotenuza = sqrt(pow(katet1, 2) + pow(katet2, 2));
	if (gipotenuza <= r1 + r2) puts("Окружности пересекаются");
	else puts("Окружности не пересекаются");
}