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
			printf("\n�ڪ����]�G%d��\n", *money);
			printf("�п�ܥ\��G\n1.��X\n2.���J\n3.�d��\n4.���}\n");
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
			printf("�п�J��X�����B�G");
			scanf_s("%d", &myAcct[*i].money);
			printf("�п�J�~/��/��(YYYY/MM/DD)\n");
			scanf_s("%d/%d/%d", &myAcct[*i].year, &myAcct[*i].month, &myAcct[*i].day);
			*money = *money - myAcct[*i].money;
			printf("��%d�~%d��%d���X%d���A�ڪ����]�G%d��\n", myAcct[*i].year,
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
			printf("�п�J���J�����B�G");
			scanf_s("%d", &myAcct[*i].money);
			printf("�п�J�~/��/��(YYYY/MM/DD)\n");
			scanf_s("%d/%d/%d", &myAcct[*i].year, &myAcct[*i].month, &myAcct[*i].day);
			*money = *money + myAcct[*i].money;
			printf("��%d�~%d��%d�馬�J%d���A�ڪ����]�G%d��\n", myAcct[*i].year,
				myAcct[*i].month, myAcct[*i].day, myAcct[*i].money, *money);
			*i = *i + 1;
			break;
		case 3:
			printf("===============================\n");
			printf(" �~  ��  ��   ��X/���J   ���B\n");
			printf("===============================\n");
			for (int j = 0; j < *i; j++)
			{
				printf("%4d%3d%4d     %s%10d\n", myAcct[j].year, myAcct[j].month, myAcct[j].day,
					myAcct[j].type == 'a' ? "��X" : "���J", myAcct[j].money);
			}
			break;
		case 4:
			return;
			break;
		}

		printf("\n�~��O�b/���}(1/0)�G");
		scanf_s("%d", &select);
		printf("\n");
	} while (select != 0);
	return;
}