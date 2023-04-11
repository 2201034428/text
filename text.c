#include<stdio.h>
#include"game.h"
#define _CRT_SECURE_NO_WARNINGS

void game()
{
	char  ret;
	char arr[ROW][COL] = { 0 };
	creatarr(arr, ROW, COL);
	disarr(arr, ROW, COL);
	while (1)
	{
		playarr(arr, ROW, COL);
		disarr(arr, ROW, COL);
		ret = iswin(arr,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		computer(arr, ROW, COL);
		disarr(arr, ROW, COL);
		ret = iswin(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
}

void meun()
{
	printf("*********************\n");
	printf("**** 1.play 0.exit***\n");
	printf("*********************\n");
}

int main()
{
	int intput = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ��\n");
		scanf_s("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (intput);
	return 0;
}