#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src) {
//	while (*src!='\0')
//	{
//		*dest++ = *src++;//��һ����
//		//dest++;
//		//src++;
//	}
//	*dest = *src;//������\0��
//}
//�Ż�
char* my_strcpy(char* dest,const char* src) {//ʹ*src���ܱ��޸�
	char* ret = dest;//��¼dest����ʼ��ַ
	assert(dest != NULL);//�ж�ָ���Ƿ���Ч ����Ϊ�գ�
	assert(src != NULL);
	while (*dest++ = *src++)
		{
			//��\0����ASCII��ֵΪ0 ������Ϊ����ѭ��������
		}
	return ret;//���ؿ������ַ����������ʼ��ַ
}

int main() {
	
	char arr1[]="hello";
	char arr2[20]="xxxxxxx";

	//my_strcpy(arr2, arr1);
	//��������ʽ����
	printf("%s", my_strcpy(arr2, arr1));

}