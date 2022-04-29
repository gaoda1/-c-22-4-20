#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* x)
//{
//	if (*x!='\0')
//	{
//		return 1 + my_strlen(x + 1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//
//
//int main()
//{
//	char arr[] = "aat";
//	int len = my_strlen(arr);//数组传参，传递的是首元素的地址
//	printf("%d\n", len);
//	return 0;
//
//}
//int k = 0;
//int Facl(int x)
//{
	/*int a = 0;
	int sum = 1;
	for ( a = 1; a <=x; a++)
	{

		sum *= a;

	}*/
	/*if (x<= 1)
	{
		return 1;
	}
	else
	{
		return x * Facl(x - 1);
	}*/
	/*if (x==3)
	{
		k++;

	}
	if (x<=2)
	{
		return 1;
	}
	else
	{
		return Facl(x - 1) + Facl(x - 2);
	}

}*/
//int fib(int n)
//{
//
//	
// int a = 1;
// int b = 1;
// int c = 1;
// while (n>2)
// {
//   c = a + b;
//   a = b;
//   b = c;
//   n--;
// }
//
// return c;
//}
//
//int main()
//{
//	int n = 0;
//	long long ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//
//}
//int main()
//{
//	test(1);
//	return 0;
//}


//#include <stdlib.h>
//int D_jump_floor(int n)//递归
//{
//	if (n <= 3)
//	{
//		return n;
//	}
//	else
//	{
//		return D_jump_floor(n - 2) + D_jump_floor(n - 1);
//	}
//}
//
//int FD_jump_floor(int n)//非递归
//{
//	int a = 1;//第一个数
//	int b = 2;//第二个数
//	int c = a;//把c赋值为a
//	while (n > 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入跳的台阶数：");
//	scanf("%d", &n);
//	int ret1 = D_jump_floor(n);
//	int ret2 = FD_jump_floor(n);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	system("pause");
//	return 0;
//}

