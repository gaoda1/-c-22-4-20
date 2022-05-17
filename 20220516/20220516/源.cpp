#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//typedef struct Stu
//{
//	 char name[20];
//	 short age;
//	 char tele[12];
//	 char sex[5];
//}Stu;
//
//
//int main()
//{
//	Stu s1 = { "ÕÅÈý",20,"123456","ÄÐ" };
//	struct Stu s2 = { "wangcai",30,"16665684", "¹·"};
//
//	return 0;
//}
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//    }
//	for (i = 0; i<100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//
//    return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//
//
//}

int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for ( i = 1; i<=n; i++)
	{	
			ret *= i;
	}
	printf("%d\n", ret);
}