//接口的实现
#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data)); //sizeof的是结构体地址，指向一个数组
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("Contact list is full, cannot add\n");
		return;
	}
	printf("Please input name:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("Please input age:>");
	scanf("%s", &(pc->data[pc->sz].age));
	printf("Please input sex:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("Please input telefone number:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("Please input address:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("Successfull adding\n");
}


void PrintContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s %-5s %-8s %-12s %-30s\n", "Name", "Age", "Sex", "Telefone", "Address");
	for (i = 0; i < pc->sz; i++)
	{
		//printf("%s %d %s %s %s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr); //无法对齐
		printf("%-20s %-5d %-8s %-12s %-30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}


//找到返回下标，找不到返回-1
int FindByName(const Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{

	assert(pc);
	if (pc->sz == 0)
	{
		printf("Contact is empty, cannot be deleted\n");
		return;
	}

	//删除： 1.找到
	char name[NAME_MAX] = { 0 };
	printf("Please input the name of being deleted:>\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("People to be deleted does not exist.\n");
		return;
	}

	//2. 删除 memmove?
	int j = 0;
	for (j = pos; j < pc->sz - 1; j++)
	{
		pc->data[j] = pc->data[j + 1];
	}
	pc->sz--;
	printf("Delete successfully");
}

void SearchContact(const Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("Please input the name you want to find:>\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("The name you are looking for does not exist.\n");
		return;
	}

	printf("%-20s %-5s %-8s %-12s %-30s\n", "Name", "Age", "Sex", "Telefone", "Address");
	printf("%-20s %-5d %-8s %-12s %-30s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
}

//void SortContactByName(Contact* pc)
//{
//
//}
//
void ResetContact(Contact* pc)
{
	int i = 0;
	for(i = 0;)
}