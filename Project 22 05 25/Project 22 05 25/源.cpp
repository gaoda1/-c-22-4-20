#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int mian()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("pfloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为:d\n", n);
//	printf("*pflaot的值为:%f\n",*pFloat);
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//
//	return 0;
//}

//void test()
//{
//
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	const char* p1 = "abcdef";
//	const char *p2 = "abcdef"; 
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4];// 存放指针的数组-指针数组
//	char* pch[5];
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	/*int* p=NULL;
//	char* pc = NULL;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//    return 0;
//}
//void printf1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < x; i++)
//	{
//		for ( j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7,} };
//	printf1(arr,3,5);
//	return 0;
//}

//void test(int arr[3][5])
//{
//}
//void test1(int* arr[5])
//{
//}
//void test2(int(*arr)[5])
//{
//}
//void test3(int** arr)
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}

//int add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%p\n", &add);
//	printf("%p\n", add);*/
//    int(*pa)(int, int) = add;
//	printf
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)()
//	return 0;
//}

void printf(char* str)
{
  printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = printf;
	(*p)("hello bit");
	return 0;
}