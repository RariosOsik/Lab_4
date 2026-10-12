#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, ".UTF8"); //у моей версии visual studio не работает setlocale(LC_CTYPE, "RUS")
	zad3();

	return 0;
}

int zad1() 
{
	char c = 'l';
	int i = 127;
	float f = 3.14f;
	double d = 5e-12;
	printf("c = %c\n", c);
	printf("i = %d\n", i);
	printf("f = %.2f\n", f);
	printf("d = %.12f\n", d);
	printf("Введите новый символ для c: \n");
	scanf("%c", &c);
	printf("Введите новое число для i: \n");
	scanf("%d", &i);
	printf("Введите новое число (до 2 символов после запятой) для f: \n");
	scanf("%f", &f);
	printf("Введите новое число (до 12 символов после запятой) для d: \n");
	scanf("%lf", &d);

	printf("c = %c\n", c);
	printf("i = %d\n", i);
	printf("f = %.2f\n", f);
	printf("d = %.12f\n", d);

	return 0;
}

int zad2() 
{
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;

	printf("%d\n", x);		
	printf("%f\n", y);		
	printf("%f\n", z);		

	printf("%f\n", (float)a / b); 
	printf("%f\n", (double)a / b); 
	printf("%f\n", (float)(a / b)); 
	printf("%f\n", (double)(a / b)); 

	return 0;
}

int zad3() 
{
	int n, a, b, x, y;
	printf("Введите целое трёхзначное число:\n");
	scanf("%d", &n);
	a = n % 10;
	x = n / 10;
	b = x % 10;
	y = x / 10;
	printf("последния цифра: %d, первая цифра: %d, сумма цифр: %d, число наоборот: %d%d%d", a, y, a + b + y, a, b, y);
	return 0;
}
