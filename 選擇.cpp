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

void selecsort(int arr[], int length)//ѡ�����򣬴������������ҵ���������С�����ַŵ���ͷ
{
	for (int i=0; i < length; i++)
	{
		int key = arr[i];//��0��ʼ�������ݣ��ȶ���һ��key
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