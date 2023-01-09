# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define MAXSIZE 10
void initArr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 20;
	}
}
void showArr(int arr[], int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		printf("%d,",arr[i]);
		
	}
	printf("\n-------\n");
}

void bubSort(int arr[], int length)
{
	while (length--)
	{
		//int flag = 0;
		for(int i=0;i<length;i++)
			if (arr[i + 1] < arr[i])
			{
				int temp;
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
				//flag = 1;
			}
			
			//if (flag == 0)
			//{
			//	break;
			//}
			showArr(arr, MAXSIZE);
	}
}

int main1()
{
	srand((unsigned int)time(NULL));
	int arr[MAXSIZE];
	initArr(arr, MAXSIZE);
	showArr(arr, MAXSIZE);
	bubSort(arr, MAXSIZE);
	showArr(arr, MAXSIZE);
	printf("hello word\n");
	system("pause");
	return 0;
}