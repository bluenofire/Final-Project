#include <stdio.h>
#include <stdlib.h>

int drink[4] = { 50, 30, 20, 40 };
int select[4], flag=1, flag1, flag2, cnt, money1, money2;
int main()
{
	
		
		
			printf("���\:\n");
			printf("1.�@��(50��) �п�ܼƶq:");
			scanf_s("%d", &select[0]);
			printf("\n");
			printf("2.�i��(30��) �п�ܼƶq:");
			scanf_s("%d", &select[1]);
			printf("\n");
			printf("3.����(20��) �п�ܼƶq:");
			scanf_s("%d", &select[2]);
			printf("\n");
			printf("4.����(40��) �п�ܼƶq:");
			scanf_s("%d", &select[3]);
			printf("\n");
			for (cnt = 0; cnt <= 3; cnt++)
			{
				money2 += drink[cnt] * select[cnt];
			}
			printf("���O�`�B:%d��\n", money1 + money2);
		
	
	
	system("PAUSE");
}