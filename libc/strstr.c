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
#include <stdlib.h>
#include <string.h>

char *mystrstr (const char *s1, const char *s2)
{
	if (!strlen(s2))
		return (char *)s1;

	while((*s1 ++) != '\0')
	{
		if (!strcmp(s1, s2))
			return (char *)s1;				
	}
		
	return NULL; 
} 

int main()
{
	char *str = "abc123456";
	char *sstr = "123";
	
	char *p = strstr(str, sstr);
	printf("substr: %s\n", p);
	return 0;
}
