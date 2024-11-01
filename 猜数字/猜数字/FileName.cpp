#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
void stop()
{
	printf("您已退出游戏，期待您的下次游玩:p\n");
}
void game()
{
start:
	int b = 0,c=0,i=10,d=0;
	srand(time(NULL));
	int r = rand()%100;
		printf("您已进入游戏，正在加载后，请稍后\n...\n...\n...\n");
		/*while (d <= 3)
		{
			system("cls");
			printf("...\n...\n...\n");
			Sleep(1000);
			d++;
		}*/
		system("cls");
		printf("请输入:");
		while (i > 0)
		{
			printf("您还有%d次机会\n", i);
		scanf("%d", &b);
		i--;
		if (i == 0)
		{
			printf("宁是fw");
			break;
		}
		if (b < r)
		{
			printf("小了\n");
			continue;
		}
		else if (b > r)
		{
			printf("大了\n");
			continue;
		}
		else
		{
			printf("你通关\n是否想再次游玩本游戏？\n是:1 否:0\n");
		scanf("%d", &c); 
		if (c == 0)
		{
			printf("您已退出游戏，期待您的下次游玩:p\n");
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
	printf("您是否要进入游戏\n是:1 否:0\n");
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
		printf("输入错误，请重新输入\n");
		goto again;
		break;
	}
	return 0;
}