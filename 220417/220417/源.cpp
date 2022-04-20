#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>


//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//int main()
//{
//
//	//字符串的借宿标志：'\0'
//	//\0-转义字符
//	//0数字
//	//'0'-码48
//
//	//EOF-文件结束标志
//	//数组的定义要常量
//	
//	//int num = 10;
//	//int num2 = 20;
//	//int max = 0;
//	//max = MAX(num, num2);
//	//printf_s("max=%d\n", max);
//	
//	//if (num > num2)
//	//	printf_s("较大者是：%d\n", num);
//	//else
//	//{
//	//	printf_s("较大者是： % d\n", num2);
//	//}*/
//	/*return 0;
//}*/
//
///int main()
//{
//	//sizeof计算大小单位是字节
//	
//	/*int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf_s("%d\n", sizeof(arr) / sizeof(arr[0]));*/
//	
//	//计算数组大小的方法
//	return 0;
//}

//C++运算符优先级表
//int main（） 
//{
//	int a = 0;//32bit
// 
//    int b = ~a;// ~ -- 按2进制位取反
////例如从0001
//	 //成1110 二进制最高位是正负号
//	//
//	printf_s("%d\n", b);
//	
//	return 0;
//}
//
//
////int main（）
////{
//	//int a = 10;
//	//int b = a++;//后置++先使用，再++ a=11 b10
//	//// INT B= ++a;前置++先++，再使用 a=11 b=11
//	//printf_s("a=%d b=%d\n", a, b);
//
//	//int a = 3;//真-非0//假-0，&&-逻辑与
//	//int b = 5;
//	//int  c = a && b;
//	//int c=a||b//相同为真，不同为假 ||-逻辑或
//	//printf_s("c=%d\n", c);
//
//
//	/*
//		int a = (int)3.14;*///DOUBLE-INT
//      /* return 0;
//}*/
//
//
////int Add(int x, int y)
////{
////	int z = 0;
////	z = -x + y;
////	return z;
////
////}
////int main（）
////{
//	//int a = 10; 
//	//int b = 20;
//	//int max = 0;
//	//max = （a > b ? a : b）;//exp1?(表达式1的结果为真，表达式2执行)
//	//if（a > b）;             //1为假，表达式3执行
//	//{
//	//	max = a;
//	//
//	//}
//	//else
//	//	{
//	//	max = b;
//	//	}
//
//
//	//源码 1 0.......10->反码 1 1......01->补码 1 1........10
//	/*int a = 10;
//	int b = 20;
//	int sum = Add(a, b);*///()函数调用操作符
//	//& * ->
//	//register in a=10;建议把a定义成寄存器变量
//	//signed是指的有符号 即有负数 ，unsigned是无符号的 即没有负数
//
//	/*signed是默认的 显示指定unsigned 为了扩大类型范围
//		即int类型大 小范围是 - 32768——32767
//
//		而unsigned int 是0 - 65535  32767 + 32768
//		用这个是针对 需要范围特别大的正数，单纯int不够大。
//		整型变量unsigned即unsigned int，在Turbo C长度为16
//		（即0～65535），在Visual C++长度为32。
//		所以在Turbo C中输出0，在Visual C++中输出65536。*/
//
////	return 0; 
////}
//
// //
////int main（）
////{ 
////	extern int g_ui;//extern 修饰全局变量
////    printf("g_ui=%d\n", g_ui);//只能在直接的源文件使用
////    return 0;
////	}
// 
// 
//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//
//}
//extern int Add(int, int);
//int main()//循环代码
//{
//	/*int i = 0;
//	while (i<5)
//    {
//		test();
//		i++;
//	}*/
//   
//	
//	int a = 10;
//  int b = 20;
//  int sum = Add(a, b);
//  printf_s("sum=%d\n", sum);
//return 0;
//}


//#define MAX (x,y)(x>y?x:y)
//int Max(int x, int y)
//{
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//
//int main()
//{
//	/*int a = MAX;*///#define可以定义宏
//	int a = 10;
//	int b = 20;
//    int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

int main()//取地址操作代码
{
	int a = 10;//4个字节
	//&a;取内存地址
	int* p = &a;//指针变量是用来存放地址的
    printf("%p\n", &a);
	//*p = 20;//解引用操作符
	//printf_s("a=%d\n", a);
		

	//char ch = 'w';
	//char* pc = &ch;
	//printf("%d\n", sizeof(pc));

	return 0 ;
}














