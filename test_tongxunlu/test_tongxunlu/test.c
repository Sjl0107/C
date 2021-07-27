#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//通讯录
//要包含人的信息：
//名字、电话、地址、QQ、性别、年龄等
//功能：
//增加、删除、查找、修改、排序、退出


void menu() {
	printf("************************************\n");
	printf("******  1、add     2、del     ******\n");
	printf("******  3、search  4、modify  ******\n");
	printf("******  5、sort    6、show    ******\n");
	printf("******        0、exit         ******\n");
	printf("************************************\n");
}

enum Option {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};

void test() {
	
	//PeoInfo data[MAX];//存放1000个人的数据
	//int sz = 0;//通讯录中有效的个数
	Contact con = { 0 };
	//初始化通讯录
	InitContact(&con);

	int input = 0;
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//add_contact(data,sz);
			add_contact(&con);
			break;
		case DEL:
			del_contact(&con);
			break;
		case SEARCH:
			search_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case SORT:
			sort_contact(&con);
			break;
		case SHOW:
			show_contact(&con);
			break;
		case EXIT:
			destroy_contact(&con);
			printf("退出通讯录\n");
			break;

		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while(input);
}

int main() {
	test();
	return 0;
}