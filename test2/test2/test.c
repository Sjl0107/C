#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print1(int arr[3][5], int x, int y) {
	
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	
}

void print2(int (*p)[5], int x, int y) {
	int i = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;
		for (j = 0; j < 5; j++) {
			printf("%d", (*(p + i))[j]);//*(p+i)ָ��ÿһ�е�Ԫ�� ���±�ȡ��ÿ����ÿ��Ԫ��
		}
		printf("\n");
	}
}

int main() {
	
	//����ָ���ʹ��
	//һ�㳣���ڶ�ά���� ���ά����
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7 } };
	print1(arr, 3, 5);//����arr��Ȼ��ʾ������Ԫ�صĵ�ַ
	print2(arr, 3, 5);

	

	return 0;
}