#include <stdio.h>
#include <stdlib.h>

size_t mystrlen(const char * src)
{
	char *p = src;
	while((*p ++) != '\0');
	return (src - p) - 1;
}

// Note: glibc use assemble to implement memcpy and strlen 
void *my_memcpy(void *dst,const void *src,unsigned int count)
{
     assert(dst);
     assert(src);
     void * ret = dst;
     if (dst <= src || (char *)dst >= ((char *)src + count))//源地址和目的地址不重叠，低字节向高字节拷贝
	 {
		 while(count--)
		 {
			 *(char *)dst = *(char *)src;
			 dst = (char *)dst + 1;
			 src = (char *)src + 1;
		 }
	 }
	 else						//源地址和目的地址重叠，高字节向低字节拷贝
	 { 
		 dst = (char *)dst + count - 1;
		 src = (char *)src + count - 1; 
		 while(count--) 
		 {
			 *(char *)dst = *(char *)src;
			 dst = (char *)dst - 1;
			 src = (char *)src - 1;
		 }
    }
	return ret;
}

//linrui
void *linrui_strcpy(void *pvTo, const void *pvFrom, size_t size)
{
	assert((pvTo != NULL) && (pvFrome != NULL));
	
	char *pbTo = (char *)pvTo;
	char *pbFrom = (char *)pvFrom;
	
	while(size -- > 0) 
	{
		*pbTo++ = *pbFrom++;
	}
	return pvTo;	
}

char *mystrcpy(char *dest, const char *src)
{
	//assert(dest == NULL);
	//assert(src == NULL);
	
	memcpy(dest, src, strlen(src) + 1);
	
	return dest;
}
