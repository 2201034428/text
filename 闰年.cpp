#include<stdio.h>

int get_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}


int main()
{
	int n = 0;
	int ret;
	//��1000�굽2000�������
	for (n = 1000; n <= 2000; n++)
	{
		int ret = get_year(n);
		if (ret == 1)
		{
			printf("����Ϊ%d\n", n);
		}

	}
	return 0;
}