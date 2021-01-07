#include <stdio.h>
#include <stdlib.h>
int eat[4] = { 80, 50, 40, 30 };
int drink[4] = { 50, 30, 20, 40 };
int select[4], flag=1, flag1, flag2, cnt, money1, money2;
int main()
{

			printf("主餐:\n");
			printf("1.炒飯(80元) 請選擇數量:");
			scanf_s("%d", &select[0]);
			printf("\n");
			printf("2.漢堡(50元) 請選擇數量:");
			scanf_s("%d", &select[1]);
			printf("\n");
			printf("3.起司堡(40元) 請選擇數量:");
			scanf_s("%d", &select[2]);
			printf("\n");
			printf("4.薯條(30元) 請選擇數量:");
			scanf_s("%d", &select[3]);
			printf("\n");
			for (cnt = 0; cnt <= 3; cnt++)
			{
				money1 += eat[cnt] * select[cnt];  //money1 = money1 + eat[cnt] * select[cnt];
			}
			printf("目前消費:%d元\n", money1);
			printf("是否點選附餐? 1是 0否:");
			scanf_s("%d", &flag2);
		
	system("PAUSE");
}