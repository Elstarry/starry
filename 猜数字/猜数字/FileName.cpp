#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
void stop()
{
	printf("�����˳���Ϸ���ڴ������´�����:p\n");
}
void game()
{
start:
	int b = 0,c=0,i=10,d=0;
	srand(time(NULL));
	int r = rand()%100;
		printf("���ѽ�����Ϸ�����ڼ��غ����Ժ�\n...\n...\n...\n");
		/*while (d <= 3)
		{
			system("cls");
			printf("...\n...\n...\n");
			Sleep(1000);
			d++;
		}*/
		system("cls");
		printf("������:");
		while (i > 0)
		{
			printf("������%d�λ���\n", i);
		scanf("%d", &b);
		i--;
		if (i == 0)
		{
			printf("����fw");
			break;
		}
		if (b < r)
		{
			printf("С��\n");
			continue;
		}
		else if (b > r)
		{
			printf("����\n");
			continue;
		}
		else
		{
			printf("��ͨ��\n�Ƿ����ٴ����汾��Ϸ��\n��:1 ��:0\n");
		scanf("%d", &c); 
		if (c == 0)
		{
			printf("�����˳���Ϸ���ڴ������´�����:p\n");
			break;
		}
		else
			goto start;
		}
	}
}
int main()
{
	again:
	printf("���Ƿ�Ҫ������Ϸ\n��:1 ��:0\n");
	int a = 0 ;
	scanf("%d", &a);
	switch (a)
	{
	case 0:
		stop();
		break;
	case 1:
		game();
		break;
	default:
		printf("�����������������\n");
		goto again;
		break;
	}
	return 0;
}