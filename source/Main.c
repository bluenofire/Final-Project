#include <stdio.h>
#include <stdlib.h>
int eat[4] = { 80, 50, 40, 30 };
int drink[4] = { 50, 30, 20, 40 };
int select[4], flag=1, flag1, flag2, cnt, money1, money2;
int main()
{
	while(flag)
	{
		printf("南亞快餐店點餐系統\n");
		printf("是否點選主餐? 1是 0否:");
		scanf_s("%d", &flag1);
		money1 = 0;
		money2 = 0;

		if (flag1)
		{
			
		}
		else
		{
			printf("是否點選附餐? 1是 0否:");
			scanf_s("%d", &flag2);
		}
		
		if (flag2)
		{
		
		}
		else
		{
			if (flag1 == 0) { flag = 0; }
			printf("消費總額:%d元\n", money1 + money2);
		}
	}
	system("PAUSE");
}