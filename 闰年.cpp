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
	//求1000年到2000年的闰年
	for (n = 1000; n <= 2000; n++)
	{
		int ret = get_year(n);
		if (ret == 1)
		{
			printf("闰年为%d\n", n);
		}

	}
	return 0;
}