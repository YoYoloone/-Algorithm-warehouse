#include<iostream>
using namespace std;
int main() {
	//冒泡排序
	//创建数组，循环输入数据。
	int a, j, temp;
	int arr[10] = {};
	for (int i = 0;i <10;i++) {
		cin >> a;
		arr[i] = a;
	}

	//依次遍历，相邻数据比较大小。
	//
	//循环一次，减少一个数据。
	for (j = 9;j > 0;j--) {
		for (int i = 0;i <= j;i++) {
			if (arr[i] < arr[i + 1]) {
				temp=arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		cout << arr[j] << " ";
	}
	//打印数据
	/*for (int i = 0;i <10;i++) {
		cout << arr[i] << " ";
	}*/
	return 0;
}
