#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//memmove
//void* my_memmove(void* dest, const void* src, size_t count) {
//	assert(dest);
//	assert(src);
//	if (dest < src) {
//		//从前向后拷贝
//		while (count--)
//			{
//				//拷贝一个字节
//				*(char*)dest = *(char*)src;
//				dest=(char*)dest+1;
//				src=(char*)src+1;
//			}
//	}
//	else {
//		//从后先前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//
//		}
//	}
//}

//memcpy
//void* my_memcpy(void* dest, const void* src, size_t count) {
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	while (count--)
//	{
//		//拷贝一个字节
//		*(char*)dest = *(char*)src;
//		dest=(char*)dest+1;
//		src=(char*)src+1;
//	}
//	return ret;
//}

int main() {
	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	//int arr2[10] = { 0 };
	//memcpy(arr2, arr1, sizeof(arr1));
	//my_memcpy(arr2, arr1, sizeof(arr1));
	//memmove(arr1 + 2, arr1, 16);
	//my_memmove(arr1 + 2, arr1, 16);
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,3,3 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);

	return 0;
}