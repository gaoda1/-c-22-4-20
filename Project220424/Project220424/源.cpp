#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//1,�⺯����2���Զ��庯��
//
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//strcpy-string copy-�ַ�������
//	//strlen-string length-�ַ��������й�
//	char arr1[] = "bit";
//	char arr2[20] = "#####";
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	
//	return 0;
//}

/*memset 
  memory-�ڴ棨memset�� set -����*/


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*'/*ֻ�ܷ�int*/, 5);//���ܳ���ԭ�����ַ���
//	printf("%s\n", arr);
//	//�����***** world��
//    return 0

//int get_max(int x, int y)
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
//	int a = 10;
//	int b = 20;
//    int max=get_max(10,20);
//	printf("%d\n", max);
//	return 0;
//}
//void swap1(int* pa,int*pb)
//{
//	int tmp = 0;
//	tmp=*pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* pa = &a;
//	//*pa=20;//�����ò���
//	printf("%d %d\n", a, b);
//	swap1(&a, &b);
//    printf("%d %d\n", a,b);
//	return 0;
//}
int c = 0;
int is_prime(int n)
{
	int j = 0;
	int k = sqrt((int)n);
	for ( j = 2; j<=k; j++)
	{
		if (n%j== 0)
		{
			break;
		}
		else if (j==k)
		{
			n = 1;
			return n;
		}
	}
	
}

int main()
{
	int i = 0;
	for ( i = 101; i<200; i+=2)
	{
		if (i%2==0||i%3==0||i%5==0||i%7==0)
		{
			continue;
		}
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	printf("%d\n", c);
	return 0;
}