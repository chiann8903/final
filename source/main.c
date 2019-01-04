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

int main()
{
	int my_money = 0;
	int i = 0;
	Acct myAcct[Acct_Data];
	int select;
	int lv = 1;
	int ex = 0;

	do
	{
		do
		{
			printf("�۪��p�p�w�w�ӤH�p�U��\t$:%d LV:%d\n\n", my_money, lv);
			printf("�п�ܥ\��G\n1.����\n2.�O�b\n3.�өʴ���\n4.�e�R\n5.���}\n");
			scanf_s("%d", &select);
		} while (select < 1 || select>5);

		switch (select)
		{
		case 1:
			Feeding(&lv, &ex);
			break;
		case 2:
			if (lv < 2)
				printf("�٥��}�񦹥\��!!\n\n");
			else
				Accounting(&my_money, &i, myAcct);
			break;
		case 3:
			if (lv < 3)
				printf("�٥��}�񦹥\��!!\n\n");
			else
				Personality();
			break;
		case 4:
			if (lv < 4)
				printf("�٥��}�񦹥\��!!\n\n");
			else
				Divination();
			break;
		case 5:
			return 0;
			break;
		}

	} while (select != 5);

	return 0;
}
