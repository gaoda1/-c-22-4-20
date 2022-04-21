#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	printf_s("%p\n", &a);//指针变量用来存放地址
//	int* p = &a;//int* p是一个指针变量，
//	*p = 20;//仅仅应用指针变量p，*仅引用操作符
//	printf("a=%d\n", a);
//
//	double d = 3.14;
//	double* pd = &d;
//	/**pd = 5.5;*/
//	printf_s("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));
//
//	
//		
//	
//	return 0;
// }


//struct Book//创建结构体类型
//{
//	char name[20];
//	short price;
//
//};
//#include<string.h>//STRCPY
//int main()
//{
//	 利用结构体类型创建一个该类型的结构体变量
//	struct  Book  b1 = { "C语言程序设计",55 };
//	strcpy(b1.name,"c++"); // strcpy:字符串拷贝-库函数-string.h
//	printf("%s\n", b1.name);
//	/*printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);*/
//	struct Book* pd = &b1;
//	/*printf("%s\n", (*pd).name);
//	printf("%价格=%d\n", (*pd).price);*/// . 指针打印书名
//	printf("%s\n", pd->name);
//	printf("%d\n", pd->price);// -》指针指向目标，更简洁
// 
	
	
	
	
	/* 
	分支与循环语句
	1.顺序结构
	2.选择结构
	if
	suitch
    3.循环结构*/



//分支语句
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf_s("未成年\n");
//	
//	else
//	{
//
//
//     if  (age >= 18 && age < 28);
//	 {
//		 printf("成年\n");
//	 }
//	 
//	 else (age >= 28 && age < 50);
//	{
//	printf("壮年\n");
//	}
//
//	}
//	return 0;
//}



//int main()
//{
//	int a =0;
//	while (a<=100)
//	{
//		printf(" % d", a);
//		a+= 2;
//     }
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//输入函数
//	/*if (day == 1);
//    {
//		printf("星期1\n");
//	}
//	else(2==day)
//	{
//		printf("星期2\n");
//	}
//	return 0;*/
//
//	switch (day)
//	{
//	/*default:
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;*/
//
//	/*default:
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;//终止符
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;*/
//
//
//
//     }
//
//
//	return 0;
//}


int main()
{

	//int a = 1;
	//while (a <= 10)
	//{
	//	if (a == 5)
	//	{
	//		continue;//终止循环,跳到判断部分
	//	}
	//	printf("%d", a);
	//	a++;
	//	
	//}

//	int ch = 0;
//	while ((ch=getchar()) !=EOF)//getchar 输入 CTRL+C结束 EOF=-1 	
//	{
//		putchar(ch);//putchar 输出
//	}
//
//    return 0;
//}
















