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

int my_strlen(char* x)
{
	if (*x!='\0')
	{
		return 1 + my_strlen(x + 1);
	}
	else
	{
		return 0;
	}
	
}


int main()
{
	char arr[] = "aat";
	int len = my_strlen(arr);//数组传参，传递的是首元素的地址
	printf("%d\n", len);
	return 0;

}