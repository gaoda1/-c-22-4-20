#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Sort_numbers(int arr[],int pz)
{
	int i = 0;
	for ( i = 0; i <pz-1; i++)
	{
		int j = 0;
		for ( j = 0; j <pz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int a=arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
			else
			{
				continue;
			}
		}
	
	}
	
	
		
}

int main()
{
	int arr[] = { 4,7,6,5,8,3,2,9,1,0 };/*
	&arr[0]=首位的地址，&arr=数组的地址*/
	int sz = sizeof(arr) / sizeof(arr[0]);
	Sort_numbers(arr,sz);
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;

}