#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//ͨѶ¼
//Ҫ�����˵���Ϣ��
//���֡��绰����ַ��QQ���Ա������
//���ܣ�
//���ӡ�ɾ�������ҡ��޸ġ������˳�


void menu() {
	printf("************************************\n");
	printf("******  1��add     2��del     ******\n");
	printf("******  3��search  4��modify  ******\n");
	printf("******  5��sort    6��show    ******\n");
	printf("******        0��exit         ******\n");
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
	
	//PeoInfo data[MAX];//���1000���˵�����
	//int sz = 0;//ͨѶ¼����Ч�ĸ���
	Contact con = { 0 };
	//��ʼ��ͨѶ¼
	InitContact(&con);

	int input = 0;
	do {
		menu();
		printf("��ѡ��>");
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
			printf("�˳�ͨѶ¼\n");
			break;

		default:
			printf("ѡ���������������\n");
			break;
		}
	} while(input);
}

int main() {
	test();
	return 0;
}