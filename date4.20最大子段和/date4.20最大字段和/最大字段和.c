#include<stdio.h>
#define SIZE 10
int MaxNum2(int* arr, int len)
{
	int max = 0;
	int sum = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		if (sum <= 0)
		{
			sum = arr[i];
		}
		else
		{
			sum += arr[i];
		}

		if (sum > max)
		{
			max = sum;
		}
	}
	return max;
}
int main()
{
	int arr[SIZE] = { -2,11,-1,-15,10,-4,13,-5,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = MaxNum2(arr, len);
	printf("%d\n", max);
	return 0;
}