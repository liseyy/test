#include <stdio.h>

#if 0
#define abs(x) ((x) < 0 ? -(x) : (x))
#else 

/*
最简单的可以通过位运算，先判断第一位：0是正数直接等于就行了；1就表示负数，由于采用补码存储，转换时将除首位外的各位先-1再取反，再将首位等于0就行了
*/

int abs(int i)
{
	if (i<0)
		return ~(--i);
	return i;
}
#endif 

int main()
{
	//int val = -1;
	long val = -2147483648;
	printf ("abs(%ld) = %ld\n", val, abs(val));
	return 0;
}
