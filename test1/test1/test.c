#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src) {
//	while (*src!='\0')
//	{
//		*dest++ = *src++;//逐一拷贝
//		//dest++;
//		//src++;
//	}
//	*dest = *src;//拷贝“\0”
//}
//优化
char* my_strcpy(char* dest,const char* src) {//使*src不能被修改
	char* ret = dest;//记录dest的起始地址
	assert(dest != NULL);//判断指针是否有效 （不为空）
	assert(src != NULL);
	while (*dest++ = *src++)
		{
			//‘\0’的ASCII码值为0 可以作为结束循环的条件
		}
	return ret;//返回拷贝后字符串数组的起始地址
}

int main() {
	
	char arr1[]="hello";
	char arr2[20]="xxxxxxx";

	//my_strcpy(arr2, arr1);
	//函数的链式访问
	printf("%s", my_strcpy(arr2, arr1));

}