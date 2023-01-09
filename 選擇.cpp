#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 10
void initarr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		arr[i] = rand() % 20;
}

void showarr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void selecsort(int arr[], int length)//选择排序，从无序序列中找到最大或者最小的数字放到开头
{
	for (int i=0; i < length; i++)
	{
		int key = arr[i];//从0开始遍历数据，先定义一个key
		int temp;
		for (int j = i; j < length; j++)
		{
			while (arr[i] < arr[j])
			{
				key = arr[j];
				temp = arr[i];
				arr[j] = temp;
				arr[i] = key;
			}
				
			
		}
		
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int arr[MAXSIZE];
	initarr(arr, MAXSIZE);
	showarr(arr, MAXSIZE);
	selecsort(arr, MAXSIZE);
	showarr(arr, MAXSIZE);
}