#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strstr
//char* my_strstr(const char* str1,const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//
//	while (*cp)
//	{
//		//一次匹配查找
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}

//strcmp
//int my_strcmp(const char* s1, const char* s2) {
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while (*s1==*s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}

//strcat
//char* my_strcat( char* dest,const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1、找目的地空间的'\0'
//	while (*dest ) {
//		dest++;
//	}
//	//2、拷贝数据
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//strcpy
//char* my_strcpy(char* dest, char* src) {
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//		//dest++;
//		//src++;
//	}
//	return ret;
//}


//strlen
//size_t my_strlen(const char* str) {
//	int count = 0;//计数器
//	assert(str != NULL);
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

size_t my_strlen(const char* str) {
	assert(str != NULL);
	if(*str!='\0'){
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main() {
	
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	
	//char arr1[20] = { 0 };
	//char arr2[] = "hello bit";
	//my_strcpy(arr1, arr2);
	//printf("%s\n", my_strcpy(arr1, arr2));

	//char arr1[20]= "hello bit";
	//my_strcat(arr1," world");
	//printf("%s\n", arr1);

	//int ret = my_strcmp("abcw", "abcdef");
	//printf("%d\n", ret);
	//if (ret < 0) {
	//	printf("小于\n");
	//}
	//else if(ret==0)
	//{
	//	printf("等于\n");
	//}
	//else
	//{
	//	printf("大于\n");
	//}

	//判断是否左旋右旋
	//char arr1[20] = "abbcdef";
	//char arr2[] = "bbc";
	//if (strlen(arr1) != strlen(arr2)) {
	//	printf("NO\n");
	//	return 0;
	//}
	//strncat(arr1, arr1, 6);
	//char* ret = my_strstr(arr1, arr2);
	//if (ret == NULL) {
	//	printf("NO\n");
	//}
	//else
	//{
	//	printf("YES\n");
	//}
	//char* str1 = "abbcdef";
	//char* str2 = "bbc";
	//char* ret = my_strstr(str1,str2);
	//printf("%s\n", ret);

	return 0;
}