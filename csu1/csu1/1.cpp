#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<windows.h>
#include <assert.h>
void sort(int arr[],int n)
{
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		for (k = i; k < n; k++)
		{

			if (arr[i] >= arr[k]);
			int a = arr[i];
			arr[i] = arr[k];
			arr[k] = a;
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i=0;i<sz;i++)
	{
		scanf("%d", arr + i);
	}
	sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	return 0;
}