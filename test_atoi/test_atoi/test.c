#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>

//���úϷ���Ƿ�״̬
enum State {
	VALID,
	INVALID
}state = VALID;

//���ַ���ת��������
int my_atoi(const char* str) {
	//��ʾ����
	int flag = 0;
	//��ʼ����Ϊ�Ƿ�
	state = INVALID;
	if (str == NULL) {
		return 0;
	}
	if (*str == '\0') {
		return 0;
	}
	//�����հ��ַ�
	while (isspace(*str))
	{
		str++;
	}
	//�жϷ���
	if (*str == '+') {
		flag = 1;
		str++;
	}
	else if(*str == '-')
	{
		flag = -1;
		str++;
	}
	//ת��
	long ret = 0;
	while (*str) {
		//�ж��Ƿ��������ַ�
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