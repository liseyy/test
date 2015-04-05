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

int mystrcmp(const char *dest, const char *source)
{
//   assert((NULL != dest) && (NULL != source));
   int ret = 0;	
   while (*dest && *source && (*dest == *source))
	{
		dest ++;
		source ++;
	}
	ret = *dest - *source;
	if(ret == 0)
		return 0;
	return ret < 0 ? -1 : 1;
/*如果dest > source,则返回值大于0，如果dest = source,则返回值等于0，如果dest  < source ,则返回值小于0。*/
}


int glibc_strcmp(const char *str1, const char *str2)
{  
	int ret = 0;
	while(!(ret = *(unsigned char*) str1 - *(unsigned char *)str2) && *str2)
	++str1, ++str2;

	if(ret < 0)
		ret = -1;   
	else if (ret > 0)
		ret = 1;   
	return ret;   
}

int main()
{
	char *str1 = "abc";
	char *str2 = "abcd";
	
	printf ("%d\n", glibc_strcmp(str1, str2));
	return 0;
}
