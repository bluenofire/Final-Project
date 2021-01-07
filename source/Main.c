#include <stdio.h>
#include <stdlib.h>

int drink[4] = { 50, 30, 20, 40 };
int select[4], flag=1, flag1, flag2, cnt, money1, money2;
int main()
{
	
		
		
			printf("附餐:\n");
			printf("1.咖啡(50元) 請選擇數量:");
			scanf_s("%d", &select[0]);
			printf("\n");
			printf("2.可樂(30元) 請選擇數量:");
			scanf_s("%d", &select[1]);
			printf("\n");
			printf("3.紅茶(20元) 請選擇數量:");
			scanf_s("%d", &select[2]);
			printf("\n");
			printf("4.奶茶(40元) 請選擇數量:");
			scanf_s("%d", &select[3]);
			printf("\n");
			for (cnt = 0; cnt <= 3; cnt++)
			{
				money2 += drink[cnt] * select[cnt];
			}
			printf("消費總額:%d元\n", money1 + money2);
		
	
	
	system("PAUSE");
}