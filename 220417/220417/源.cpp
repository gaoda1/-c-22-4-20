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
//	//�ַ����Ľ��ޱ�־��'\0'
//	//\0-ת���ַ�
//	//0����
//	//'0'-��48
//
//	//EOF-�ļ�������־
//	//����Ķ���Ҫ����
//	
//	//int num = 10;
//	//int num2 = 20;
//	//int max = 0;
//	//max = MAX(num, num2);
//	//printf_s("max=%d\n", max);
//	
//	//if (num > num2)
//	//	printf_s("�ϴ����ǣ�%d\n", num);
//	//else
//	//{
//	//	printf_s("�ϴ����ǣ� % d\n", num2);
//	//}*/
//	/*return 0;
//}*/
//
///int main()
//{
//	//sizeof�����С��λ���ֽ�
//	
//	/*int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf_s("%d\n", sizeof(arr) / sizeof(arr[0]));*/
//	
//	//���������С�ķ���
//	return 0;
//}

//C++��������ȼ���
//int main���� 
//{
//	int a = 0;//32bit
// 
//    int b = ~a;// ~ -- ��2����λȡ��
////�����0001
//	 //��1110 ���������λ��������
//	//
//	printf_s("%d\n", b);
//	
//	return 0;
//}
//
//
////int main����
////{
//	//int a = 10;
//	//int b = a++;//����++��ʹ�ã���++ a=11 b10
//	//// INT B= ++a;ǰ��++��++����ʹ�� a=11 b=11
//	//printf_s("a=%d b=%d\n", a, b);
//
//	//int a = 3;//��-��0//��-0��&&-�߼���
//	//int b = 5;
//	//int  c = a && b;
//	//int c=a||b//��ͬΪ�棬��ͬΪ�� ||-�߼���
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
////int main����
////{
//	//int a = 10; 
//	//int b = 20;
//	//int max = 0;
//	//max = ��a > b ? a : b��;//exp1?(���ʽ1�Ľ��Ϊ�棬���ʽ2ִ��)
//	//if��a > b��;             //1Ϊ�٣����ʽ3ִ��
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
//	//Դ�� 1 0.......10->���� 1 1......01->���� 1 1........10
//	/*int a = 10;
//	int b = 20;
//	int sum = Add(a, b);*///()�������ò�����
//	//& * ->
//	//register in a=10;�����a����ɼĴ�������
//	//signed��ָ���з��� ���и��� ��unsigned���޷��ŵ� ��û�и���
//
//	/*signed��Ĭ�ϵ� ��ʾָ��unsigned Ϊ���������ͷ�Χ
//		��int���ʹ� С��Χ�� - 32768����32767
//
//		��unsigned int ��0 - 65535  32767 + 32768
//		���������� ��Ҫ��Χ�ر�������������int������
//		���ͱ���unsigned��unsigned int����Turbo C����Ϊ16
//		����0��65535������Visual C++����Ϊ32��
//		������Turbo C�����0����Visual C++�����65536��*/
//
////	return 0; 
////}
//
// //
////int main����
////{ 
////	extern int g_ui;//extern ����ȫ�ֱ���
////    printf("g_ui=%d\n", g_ui);//ֻ����ֱ�ӵ�Դ�ļ�ʹ��
////    return 0;
////	}
// 
// 
//void test()
//{
//	static int a = 1;//a ��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//
//}
//extern int Add(int, int);
//int main()//ѭ������
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
//	/*int a = MAX;*///#define���Զ����
//	int a = 10;
//	int b = 20;
//    int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

int main()//ȡ��ַ��������
{
	int a = 10;//4���ֽ�
	//&a;ȡ�ڴ��ַ
	int* p = &a;//ָ�������������ŵ�ַ��
    printf("%p\n", &a);
	//*p = 20;//�����ò�����
	//printf_s("a=%d\n", a);
		

	//char ch = 'w';
	//char* pc = &ch;
	//printf("%d\n", sizeof(pc));

	return 0 ;
}














