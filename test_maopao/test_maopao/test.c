#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comp_int(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[],int sz) {
	int i = 0;
	for (i = 0; i < sz ; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//qsort排序结构体数组
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2) {
	return strcmp(((struct Stu*)e1)->age , ((struct Stu*)e2)->age);
}


void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2)) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0) {
				//交换 一个字节一个字节的交换
				int k = 0;
				for (k = 0; k < width; k++) {
					char tmp = *((char*)base + j * width);
					*((char*)base + j * width) = *((char*)base + (j + 1) * width);
					*((char*)base + (j + 1) * width) = tmp;

				}
			}
		}
	}
}

//qsort排序整型
void test1() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, 4, comp_int);
	bubble_sort(arr, sz, 4, comp_int);
	print_arr(arr, sz);
}
void test2() {
	struct Stu arr[] = { {"zhangsan",20},{"lisi",80},{"wangwu",5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}
void test3() {
	struct Stu arr[] = { {"zhangsan",20},{"lisi",80},{"wangwu",5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}
int main() {
	
	test1();
	test2();
	test3();

	return 0;
}
