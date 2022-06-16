#include<stdio.h>
#include<string.h>
#include<assert.h>

//void* my_memcpy(void* dest,const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL); 
//	int i = 0;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//void my_memmove(void* dest,const void* src,size_t count)
//{
//	if（dest<src）
//	{
//	
//	}
//	else
//	{
//
//	}
//}
//int main()
//{
//	/*int arr1[] = {1 ,2,3,4,5};
//	int arr2[10] = { 0 };
//	my_memcpy(arr2,arr1,sizeof(arr1));*/
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr4[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr4 , arr3,20);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr,1,10);
//	return 0;
//}
//struct MyStruct
//{
//	int a;
//	char c;
//}sa;
//struct MyStruct
//{
//	int a;
//	char c;
//}*psa;
//
//int main()
//{
//
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//
//};
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s ={'c',100,3.14,"hello bit"};
//	printf("%c %d %if %s\n", s, c, s, a, s, d, s, arr);
//
//	
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	struct s1 s1 = { 0 };
//	printf("%d\n",sizeof(s1));
//	return 0;
//}


//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	const char* s1 = p1;
//	const char* s2 = p2;
//	const char* cur = p1;
//	if (*p2=='\0')
//	{
//		return NULL;
//	}
//	while (*cur)
//	{
//		while (*p1==*p2)
//		{
//			p1++;
//			p2++;
//		}
//		p1++;
//	}
//	
//}
#include<ctype.h>
/*memcpy 只处理 不重叠的内存拷贝就可以-60-100
  memmove 处理重叠内存的拷贝*/
int main()
{
	int i = 0;
	char ch = toupper('q');
	 putchar(ch);
	 char arr[] = "I AM A STUDENT";
	 while (arr[i])
	 {
		 if (i   supper(arr[i]))
		 {
			 arr[i]=tolower(arr[i]);
		 }
		 i++;
	 }
	 printf("%s\n",arr);
	return 0;
}

