#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InitContact(Contact* pc) {
	assert(pc);
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL) {
		perror("InitContact::malloc");
		return;
	}

}

//void add_contact(Contact* pc) {
//	if (pc->sz == MAX) {
//		printf("ͨѶ¼����\n");
//	}
//	else
//	{
//		//����
//		printf("���������֣�>");
//		scanf("%s", pc->data[pc->sz].name);//ͨѶ¼��data�����±�Ϊsz��Ԫ��
//		printf("������绰��>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("�������ַ��>");
//		scanf("%s", pc->data[pc->sz].addr);
//		printf("������QQ��>");
//		scanf("%s", pc->data[pc->sz].qq);
//		printf("�������Ա�>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("���������䣺>");
//		scanf("%d", &(pc->data[pc->sz].age));
//
//		pc->sz++;
//		printf("���ӳɹ�\n");
//	}
//}
void add_contact(Contact* pc) {
	assert(pc);
	if (pc->sz == pc->capacity) {
		//��������
		PeoInfo* ptr=(PeoInfo*) realloc(pc->data, (pc->capacity+INC)*sizeof(PeoInfo));
		if (ptr != NULL) {
			pc->data = ptr;
			pc->capacity += INC;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("add_contact::realooc");
			return;
		}
	}
	//�ռ乻��

	//����
	printf("���������֣�>");
	scanf("%s", pc->data[pc->sz].name);//ͨѶ¼��data�����±�Ϊsz��Ԫ��
	printf("������绰��>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ��>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("������QQ��>");
	scanf("%s", pc->data[pc->sz].qq);
	printf("�������Ա�>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("���������䣺>");
	scanf("%d", &(pc->data[pc->sz].age));

	pc->sz++;
	printf("���ӳɹ�\n");
}

void show_contact(Contact* pc) {
	assert(pc);
	int i = 0;
	printf("%10s %12s %20s %5s %12s %5s\n", "����", "�绰", "��ַ", "����", "QQ", "�Ա�");
	for (i = 0; i < pc->sz; i++) {
		printf("%10s %12s %20s %5d %12s %5s\n", pc->data[i].name, pc->data[i].tele, pc->data[i].addr, 
			pc->data[i].age, pc->data[i].qq, pc->data[i].sex);
	}
}

static int find_peo_by_name(Contact* pc,char name[]) {
	//char name[MAX_NAME] = { 0 };
	//printf("���������֣�");
	//scanf("%s", name);
	int i = 0;
	for (i = 0; i < pc->sz; i++) {
		if (strcmp(name, pc->data[i].name)==0) {
			return i;//�ҵ��� �����±�
		}
	}
	return -1;//�Ҳ���
}

void del_contact(Contact* pc) {
	assert(pc);
	if (pc->sz == 0) {
		printf("��Ǹ��ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("���������֣�");
		scanf("%s", name);
		//�ҵ�ָ������ϵ�˵�λ��
		int pos = find_peo_by_name(pc,name);
		if (pos == -1) {
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//ɾ��
			int j = 0;
			for (j = pos; j < pc->sz-1; j++) {
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
		
	}
}

void search_contact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1) {
		printf("���޴���\n");
	}
	else
	{
		printf("%10s %12s %20s %5s %12s %5s\n", "����", "�绰", "��ַ", "����", "QQ", "�Ա�");
		printf("%10s %12s %20s %5d %12s %5s\n", pc->data[pos].name, pc->data[pos].tele, pc->data[pos].addr,
			pc->data[pos].age, pc->data[pos].qq, pc->data[pos].sex);
	}
}

void modify_contact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1) {
		printf("���޴���\n");
	}
	else {
		printf("�������µ����֣�>");
		scanf("%s", pc->data[pos].name);//ͨѶ¼��data�����±�Ϊsz��Ԫ��
		printf("������绰��>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pos].addr);
		printf("������QQ��>");
		scanf("%s", pc->data[pos].qq);
		printf("�������Ա�>");
		scanf("%s", pc->data[pos].sex);
		printf("���������䣺>");
		scanf("%d", &(pc->data[pos].age));
	}
}

void sort_contact(Contact* pc) {
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++) {
		int flag = 1;//�����Ѿ�����
		for (j = 0; j < pc->sz-1-i; j++) {
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0) {//����
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag) {
			break;
		}
	}
}

void destroy_contact(Contact* pc) {
	free(pc->data);
	pc->data == NULL;
	pc->capacity = 0;
	pc->sz = 0;
}