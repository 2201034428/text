#include<stdio.h>


int main()
{
	int n = 7;
	int mid;
	int arr1[] = {1,2,3,4,5,6,7,8,9,10,11};
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr1[mid] > n)
		{
			right = mid ;
		}
		else if (arr1[mid] < n)
		{
			left = mid ;
		}
		else
		{
			printf("找到了,下标是%d\n", mid);
			break;
		}
	}


	 
	if(left>right)
		printf("找不到");
     return 0;
}