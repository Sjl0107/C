#define _CRT_SECURE_NO_WARNINGS 1

#define DEFAULT_SZ 3
#define INC 2

#define MAX 1000
#define MAX_NAME 20
#define MAX_TEL 12
#define MAX_ADDR 100
#define MAX_QQ 12
#define MAX_SEX 5

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//类型的声明 函数的声明
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TEL];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	int  age;
}PeoInfo;
//通讯录
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;
//默认可以放5个人的信息
typedef struct Contact
{
	PeoInfo *data;//数据
	int sz;//有效个数
	int capacity;//通讯录当前的容量
}Contact;

//初始化
void InitContact(Contact* pc);
//检查、增容
void check_capacity(Contact* pc);
//添加一个人的信息
void add_contact(Contact* pc);
//显示通讯录中的信息
void show_contact(Contact* pc);
//删除指定的联系人
void del_contact(Contact* pc);
//查找指定联系人
void search_contact(Contact* pc);
//修改
void modify_contact(Contact* pc);
//排序
void sort_contact(Contact* pc);
//销毁
void destroy_contact(Contact* pc);
//保存
void save_contact(Contact* pc);
//加载
void load_contact(Contact* pc);