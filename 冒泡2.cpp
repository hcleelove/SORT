#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 10

void initARR(int arr[],int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 20;
	}
}

void showARR(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
		
	}
	printf("\n");
}

void bubsort(int arr[], int length)
{
	int flag = 0;
	while (length--)
	{
		for (int i = 0; i < length; i++)
			if (arr[i] < arr[i + 1])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				flag = 1;
			}
		showARR(arr, MAXSIZE);
		if (flag == 0)
		{
			break;

		}


	}
}

int main2()
{
	srand((unsigned int)time(NULL));
	int arr[MAXSIZE];
	initARR(arr, MAXSIZE);
	showARR(arr, MAXSIZE);
	bubsort(arr, MAXSIZE);
	showARR(arr, MAXSIZE);
	return 0;
}

