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

void test()
{
	int  a[5] = {1, 2, 3, 4, 5};
	int  *ptr = (int *)(&a+1);
	printf("%d %d",*(a+1),*(ptr-1));
	
#if 0
&a是一个指向数组的指针（行指针），a的步长就是数组的长度。也就是说执行a+1时，a要跨过n个整型数据的长度，输出*ptr就会发现越界了，是一个随机值，那么ptr-1的值就是数组的最后一个值了。
&a+1不是首地址+1， 系统会认为加一个a数组的偏移， 是偏移了一个数组的大小（本例是5个int ）
int *ptr = (int *)(&a+1);
则ptr实际上是&(a[5]),也就是a+5
原因如下：
&a 是数组指针， 其类型为int (*)[5];
而指针加1要根据指针类型加上一定的值， 不同类型的指针+1之后增加的大小不同。
a 是长度为5的int数组指针，所以要加5*sizeof(int)
所以，ptr实际是ptr[5]
但是ptr与（&a+1）类型时不一样的（这点很重要）
所以ptr-1只会减去sizeof(int *)
a, &a的地址是一样的，但是意思不一样
a是数组首地址，也就是a[0]的地址，&a是对象（数组）首地址
a+1是数组下一元素的地址，即a[1], &a+1是下一个对象的地址，即a[5].
#endif 
}

#if 0
char str1[] = "abc";
char str2[] = "abc";

const char str3[] = "abc";
const char str4[] = "abc";

const char* str5 = "abc";
const char* str6 = "abc";

cout << boolalpha << ( str1==str2 ) << endl; // 输出什么？
cout << boolalpha << ( str3==str4 ) << endl; // 输出什么？
cout << boolalpha << ( str5==str6 ) << endl; // 输出什么？

//----------------------
答：分别输出false,false,true。str1和str2都是字符数组，每个都有其自己的存储区，它们的值则是各存储区首地址，不等；
str3和str4同上，只是按const语义，它们所指向的数据区不能修改。str5和str6并非数组而是字符指针，并不分配存储区，
其后的“abc”以常量形式存于静态数据区，而它们自己仅是指向该区首地址的指针，所以相等。
#endif 

int main()
{
	test();
	return 0;
}
