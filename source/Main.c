#include <stdio.h>
#include <stdlib.h>
int eat[4] = { 80, 50, 40, 30 };
int drink[4] = { 50, 30, 20, 40 };
int select[4], flag=1, flag1, flag2, cnt, money1, money2;
int main()
{
	while(flag)
	{
		printf("�n�ȧ��\���I�\�t��\n");
		printf("�O�_�I��D�\? 1�O 0�_:");
		scanf_s("%d", &flag1);
		money1 = 0;
		money2 = 0;

		if (flag1)
		{
			
		}
		else
		{
			printf("�O�_�I����\? 1�O 0�_:");
			scanf_s("%d", &flag2);
		}
		
		if (flag2)
		{
		
		}
		else
		{
			if (flag1 == 0) { flag = 0; }
			printf("���O�`�B:%d��\n", money1 + money2);
		}
	}
	system("PAUSE");
}