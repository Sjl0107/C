#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct Point
{
	int x;
	int y;
};

struct Node
{
	struct Point p;
	struct Node* next;
};

int main() {
	struct Point p = { 3,5 };
	printf("x=%d,y=%d\n", p.x, p.y);
	struct Node n = { {5,9},NULL };
	printf("x=%d,y=%d\n", n.p.x, n.p.y);

	return 0;
}