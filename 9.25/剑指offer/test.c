#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��Ŀһ���ҳ��������ظ�������
/*��һ������Ϊn����������������ֶ���0��n - 1�ķ�Χ�ڡ�
������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�
Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡�
���磬������볤��Ϊ7������{ 2,3,1,0,2,5,3 }��
��ô��Ӧ������ǵ�һ���ظ�������2����3��*/
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
