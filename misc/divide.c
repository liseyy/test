#include <stdio.h>
/*
	only use left and right shift to implement divide operation.
*/

unsigned int divide(unsigned int a, unsigned int b)
{
	unsigned int c = 1, d = 0, _b = b;
	while(a >= b)
	{
		c <<= 1;
		b <<= 1;
	}
	b >>= 1;
	c >>= 1;
	while(b >= _b)
	{
		if(a >= b)
		{
			a -= b;
			d += c;
		}
		b >>= 1;
		c >>= 1;
	}
	return d;
}

int main()
{
	unsigned int a = 18, b = 3;
	unsigned int ret = divide(a, b);
	printf("%d/%d=%d\n", a, b, ret);
	return 0;
}
