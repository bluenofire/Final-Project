#include <stdio.h>
#include <stdlib.h>
int eat[4] = { 80, 50, 40, 30 };
int drink[4] = { 50, 30, 20, 40 };
int select[4], flag=1, flag1, flag2, cnt, money1, money2;
int main()
{

			printf("�D�\:\n");
			printf("1.����(80��) �п�ܼƶq:");
			scanf_s("%d", &select[0]);
			printf("\n");
			printf("2.�~��(50��) �п�ܼƶq:");
			scanf_s("%d", &select[1]);
			printf("\n");
			printf("3.�_�q��(40��) �п�ܼƶq:");
			scanf_s("%d", &select[2]);
			printf("\n");
			printf("4.����(30��) �п�ܼƶq:");
			scanf_s("%d", &select[3]);
			printf("\n");
			for (cnt = 0; cnt <= 3; cnt++)
			{
				money1 += eat[cnt] * select[cnt];  //money1 = money1 + eat[cnt] * select[cnt];
			}
			printf("�ثe���O:%d��\n", money1);
			printf("�O�_�I����\? 1�O 0�_:");
			scanf_s("%d", &flag2);
		
	system("PAUSE");
}