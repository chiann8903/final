#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#define Acct_Data 50

void Accounting(int *, int*, struct Acct[]);
void Feeding(int*, int*);
void Personality();
void Divination();

typedef struct _Accounting
{
	int money;
	char type;
	int year;
	int month;
	int day;
}Acct;
void Accounting(int *money, int *i, Acct myAcct[Acct_Data])
{
	int select;

	do
	{
		do
		{
			printf("\n我的錢包：%d元\n", *money);
			printf("請選擇功能：\n1.支出\n2.收入\n3.查詢\n4.離開\n");
			scanf_s("%d", &select);
		} while (select < 1 || select>4);

		switch (select)
		{
		case 1:
			if (*i == Acct_Data)
			{
				for (int j = 0; j < Acct_Data - 1; j++)
				{
					myAcct[j] = myAcct[j + 1];
					*i = Acct_Data - 1;
				}
			}
			myAcct[*i].type = 'a';
			printf("請輸入支出的金額：");
			scanf_s("%d", &myAcct[*i].money);
			printf("請輸入年/月/日(YYYY/MM/DD)\n");
			scanf_s("%d/%d/%d", &myAcct[*i].year, &myAcct[*i].month, &myAcct[*i].day);
			*money = *money - myAcct[*i].money;
			printf("於%d年%d月%d日支出%d元，我的錢包：%d元\n", myAcct[*i].year,
				myAcct[*i].month, myAcct[*i].day, myAcct[*i].money, *money);
			*i = *i + 1;
			break;
		case 2:
			if (*i == Acct_Data)
			{
				for (int j = 0; j < Acct_Data - 1; j++)
				{
					myAcct[j] = myAcct[j + 1];
					*i = Acct_Data - 1;
				}
			}
			myAcct[*i].type = 'b';
			printf("請輸入收入的金額：");
			scanf_s("%d", &myAcct[*i].money);
			printf("請輸入年/月/日(YYYY/MM/DD)\n");
			scanf_s("%d/%d/%d", &myAcct[*i].year, &myAcct[*i].month, &myAcct[*i].day);
			*money = *money + myAcct[*i].money;
			printf("於%d年%d月%d日收入%d元，我的錢包：%d元\n", myAcct[*i].year,
				myAcct[*i].month, myAcct[*i].day, myAcct[*i].money, *money);
			*i = *i + 1;
			break;
		case 3:
			printf("===============================\n");
			printf(" 年  月  日   支出/收入   金額\n");
			printf("===============================\n");
			for (int j = 0; j < *i; j++)
			{
				printf("%4d%3d%4d     %s%10d\n", myAcct[j].year, myAcct[j].month, myAcct[j].day,
					myAcct[j].type == 'a' ? "支出" : "收入", myAcct[j].money);
			}
			break;
		case 4:
			return;
			break;
		}

		printf("\n繼續記帳/離開(1/0)：");
		scanf_s("%d", &select);
		printf("\n");
	} while (select != 0);
	return;
}