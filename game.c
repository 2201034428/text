#include"game.h"


void creatarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}

}

void disarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i<row;i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int z = 0;
			for (z = 0; z < col; z++)
			{
				printf("---");
				if(z<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playarr(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while(1)
	{
		printf("请输入坐标");
		scanf_s("%d%d", &x, &y);
		if (x <= row && x>0 && y <=col && col>0)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用\n");
		}
		else
			printf("坐标不合法\n");
	}	
}

void computer(char arr[ROW][COL], int row, int col)
{
	int x;
	int y;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() & col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}

int isfull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if(arr[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char iswin(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
			return arr[i][1];
    }
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
			return arr[1][i];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
		return arr[1][1];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
		return arr[1][1];
	if (1 == isfull(arr, ROW , COL))
	{
		return 'Q';
	}
	return 'C';
}