#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int a;
int g = 80;
int main()

{
	printf("1:%d\n", g);
	{
		printf("2:%d\n", g);
	}
	printf("%d\n", a);
	printf("3:%d\n", g);
	return 0;
}