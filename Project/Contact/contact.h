#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//接口声明

//类型的声明

enum Option
{
	EXIT, //0
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
} PeoInfo;

typedef struct Contact
{
	PeoInfo data[1000];
	int sz;
}Contact;

//函数的声明

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人的信息
void AddContact(Contact* pc);

//打印通讯录中的信息
void PrintContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找联系人
void SearchContact(const Contact* pc);



