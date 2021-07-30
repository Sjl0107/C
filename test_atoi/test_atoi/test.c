#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>

//设置合法与非法状态
enum State {
	VALID,
	INVALID
}state = VALID;

//把字符串转换成整数
int my_atoi(const char* str) {
	//表示正负
	int flag = 0;
	//开始设置为非法
	state = INVALID;
	if (str == NULL) {
		return 0;
	}
	if (*str == '\0') {
		return 0;
	}
	//跳过空白字符
	while (isspace(*str))
	{
		str++;
	}
	//判断符号
	if (*str == '+') {
		flag = 1;
		str++;
	}
	else if(*str == '-')
	{
		flag = -1;
		str++;
	}
	//转换
	long ret = 0;
	while (*str) {
		//判断是否是数字字符
		if (isdigit(*str) == 0)
		{
			break;
		}
		else
		{
			ret = ret * 10 + flag*(*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				ret = 0;
				return (int)ret;
			}
			str++;
		}
		if (*str == '\0')
		{
			state = VALID;
			return (int)ret;
		}
	}
	return (int)ret;
}

int main() {
	char* p = "12345";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	else
	{
		printf("%d\n", ret);
	}
	return 0;
}