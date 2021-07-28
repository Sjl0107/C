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

//���͵����� ����������
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TEL];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	int  age;
}PeoInfo;
//ͨѶ¼
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;
//Ĭ�Ͽ��Է�5���˵���Ϣ
typedef struct Contact
{
	PeoInfo *data;//����
	int sz;//��Ч����
	int capacity;//ͨѶ¼��ǰ������
}Contact;

//��ʼ��
void InitContact(Contact* pc);
//��顢����
void check_capacity(Contact* pc);
//���һ���˵���Ϣ
void add_contact(Contact* pc);
//��ʾͨѶ¼�е���Ϣ
void show_contact(Contact* pc);
//ɾ��ָ������ϵ��
void del_contact(Contact* pc);
//����ָ����ϵ��
void search_contact(Contact* pc);
//�޸�
void modify_contact(Contact* pc);
//����
void sort_contact(Contact* pc);
//����
void destroy_contact(Contact* pc);
//����
void save_contact(Contact* pc);
//����
void load_contact(Contact* pc);