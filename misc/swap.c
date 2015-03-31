#include <stdio.h>

void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int a = 5, b = 6;
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
