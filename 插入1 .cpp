#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 10

void initarr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 20;
	}
}

void showarr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insersort(int arr[], int length)
{
	for (int i = 1; i < length; i++)
	{
		int key = arr[i];//這個是關鍵值，每次從沒排序的序列中順序找出一個需要排序的數字
		int j = i - 1;//在有序的序列中找到一個合適的位置，這個位置必須從無序序列的第一個開始
		while (j >= 0 && arr[j] > key)//j在有序序列的位置有效，并且這個值比key值大
		{
			arr[j + 1] = arr[j];//就讓有序序列中的數據右移一位，給新數據留一個地方
			j--;//讓j的位置再退一位，讓後繼續循環，看看有序序列中是不是還是有滿足有序序列中的數據比key大的地方。
		}
		arr[j + 1] = key;//如果沒有了，那麽就把key值放到剛剛騰出來的位置
		printf("這是第%d次排序\n", i);
		showarr(arr, MAXSIZE);
	}
}

int main33()
{
	
	srand((unsigned int)time(NULL));//隨機時間種子
	int arr[MAXSIZE];//定義數列
	initarr(arr, MAXSIZE);//初始化
	showarr(arr, MAXSIZE);//打印初始順序
	insersort(arr, MAXSIZE);//排序
	showarr(arr, MAXSIZE);//打印排序後的序列
	return 0;
}