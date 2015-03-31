#include <stdio.h>

int main()  
{
	char str[][10]={"China", "Beijing"}, *p=str[0];
	printf("%s\n",p+10);
	
}
