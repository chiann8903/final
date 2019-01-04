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
		printf("正在進行餵食功能\n\n目前石虎喵喵的狀態:LV:%d", *lv);
		for (int i = 1; i <= *ex; i++)
		{
			printf("-");
		}
		printf("\n");
		printf("請選擇要餵食的食物:\n(1)炸雞 or (2)啤酒 or (3)退出       ");
		scanf_s("%d", &select);
		printf("\n");
		if (*lv == lim)
		{
			printf("已達等級上限\n");
			return;
		}
		else if (*lv < lim)
		{
			switch (select)
			{
			case 1:
				printf("已選擇 炸雞 增加1點經驗值\n===================================\n");
				*ex = *ex + 1;
				break;
			case 2:
				printf("已選擇 啤酒 增加1點經驗值\n===================================\n");
				*ex = *ex + 1;
				break;
			case 3:
				printf("已退出\n");
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