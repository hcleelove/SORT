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
		int key = arr[i];//�@�����P�Iֵ��ÿ�Ώě]���������������ҳ�һ����Ҫ����Ĕ���
		int j = i - 1;//��������������ҵ�һ�����m��λ�ã��@��λ�ñ�횏ğo�����еĵ�һ���_ʼ
		while (j >= 0 && arr[j] > key)//j���������е�λ����Ч�������@��ֵ��keyֵ��
		{
			arr[j + 1] = arr[j];//��׌���������еĔ�������һλ���o������һ���ط�
			j--;//׌j��λ������һλ��׌���^�mѭ�h�����������������ǲ���߀���НM�����������еĔ�����key��ĵط���
		}
		arr[j + 1] = key;//����]���ˣ�����Ͱ�keyֵ�ŵ������v�����λ��
		printf("�@�ǵ�%d������\n", i);
		showarr(arr, MAXSIZE);
	}
}

int main33()
{
	
	srand((unsigned int)time(NULL));//�S�C�r�g�N��
	int arr[MAXSIZE];//���x����
	initarr(arr, MAXSIZE);//��ʼ��
	showarr(arr, MAXSIZE);//��ӡ��ʼ���
	insersort(arr, MAXSIZE);//����
	showarr(arr, MAXSIZE);//��ӡ�����������
	return 0;
}