/****************************************************************************/
/*
 *  $Version: 0.1
 *  $Date:    2015-04-05
 *  $Author:  Jeff Chen
 *  $Email:   yonghongchen602@gmail.com  
 *
 */
/****************************************************************************/
#include <stdio.h>
#include <string.h>

void test()
{
	char s[100] = {'a', 'b', 'c', 'd'};
	printf ("size: %d\n", strlen(s));
	char *str= "abcd";
	printf ("len: %d\n", strlen(str));
	
	////
	char s2[] = "Hello word!";
	printf("s2 size: %d\n", sizeof(s2));

	int s3[] = {1, 2, 4, 4, 5};
	printf("s3 size: %d\n", sizeof(s3));
}

int main()
{
	test();
	return 0;
}
