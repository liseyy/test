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

int main()  
{
	char str[][10]={"China", "Beijing"}, *p=str[0];
	printf("%s\n",p+10);
	
}
