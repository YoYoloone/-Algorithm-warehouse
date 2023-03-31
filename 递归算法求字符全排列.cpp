//递归法求给定数据全排列

#include<stdio.h>
 
void Swap(int& a, int& b)/*交换函数，将a和b的值互换*/
{
	int c = a;
	a = b;
	b = c;
}
 
 //全排列递归算法
void Perm(int* br, int k, int m)
                                //k代表递归层数，就是现在排第几个数了，m表示数组的长度。
                                /*br代表要进行全排列的数组，k~m代表这个数组中要进行全排列数字的范围*/
{
	if (k == m)
	{
		for (int i = 0; i <= m; ++i)
		{
			printf("%d ", br[i]);
		}
		printf("\n");
	}
	else
	{
		for (int j = k; j <= m; ++j)
		{
			Swap(br[j], br[k]);
			Perm(br, k + 1, m);
			Swap(br[j], br[k]);
		}
	}
}
 
int main()
{
	int ar[] = { 1,2,3 };
	int n = sizeof(ar) / sizeof(ar[0]);
	Perm(ar, 0, n - 1);
	return 0;
}
