#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#define Acct_Data 50

void Accounting(int *, int*, struct Acct[]);
void Feeding(int*, int*);
void Personality();
void Divination();
void Feeding(int *lv, int *ex)
{
	int select;
	int lim = 5;
	while (1)
	{
		printf("���b�i�������\��\n\n�ثe�۪��p�p�����A:LV:%d", *lv);
		for (int i = 1; i <= *ex; i++)
		{
			printf("-");
		}
		printf("\n");
		printf("�п�ܭn����������:\n(1)���� or (2)��s or (3)�h�X       ");
		scanf_s("%d", &select);
		printf("\n");
		if (*lv == lim)
		{
			printf("�w�F���ŤW��\n");
			return;
		}
		else if (*lv < lim)
		{
			switch (select)
			{
			case 1:
				printf("�w��� ���� �W�[1�I�g���\n===================================\n");
				*ex = *ex + 1;
				break;
			case 2:
				printf("�w��� ��s �W�[1�I�g���\n===================================\n");
				*ex = *ex + 1;
				break;
			case 3:
				printf("�w�h�X\n");
				return;
				break;
			}
			if (*ex % 10 == 0)
			{
				*lv = *lv + 1;
				*ex = 0;
			}
		}

	}
}