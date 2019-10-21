#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//题目一：找出数组中重复的数字
/*在一个长度为n的数组里的所有数字都在0到n - 1的范围内。
数组中某些数字是重复的，但不知道有几个数字是重复的。
也不知道每个数字重复几次。请找出数组中任意一个重复的数字。
例如，如果输入长度为7的数组{ 2,3,1,0,2,5,3 }，
那么对应的输出是第一个重复的数字2或者3。*/
#include<stdio.h>
#include<stdlib.h>

int getNum(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				return *(arr + i);
			}
		}
	}
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = getNum(arr, size);
	printf("%d\n", ret);

	system("pause");
	return 0;
}
