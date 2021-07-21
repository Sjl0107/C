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
			printf("%d", (*(p + i))[j]);//*(p+i)指向每一行的元素 用下标取到每行中每个元素
		}
		printf("\n");
	}
}

int main() {
	
	//数组指针的使用
	//一般常见于二维数组 或多维数组
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7 } };
	print1(arr, 3, 5);//这里arr依然表示的是首元素的地址
	print2(arr, 3, 5);

	

	return 0;
}