#include "SortArray.h"

int* SelectionSort(int arr[], int size)
{
	int aux = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int aux = arr[j];
				arr[j] = arr[i];
				arr[i] = aux;
			}
		}
	}
	return arr;
}

int* BubbleSort(int arr[], int size)
{
	int changes = 0;
	int tries = 0;
	int aux = 0;

	do
	{
		changes = 0;
		for (int i = 0; i < size - tries - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int aux = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = aux;
				changes++;
			}
		}
		tries++;
	} while (changes != 0);

	return arr;
}

int* InsertionSort(int arr[], int size)
{
	int v = 0;
	int p = 0;

	for (int i = 1; i < size; i++)
	{
		v = arr[i];
		p = i;

		while (p > 0 && arr[p - 1] > v)
		{
			arr[p] = arr[p - 1];
			p--;
		}
		arr[p] = v;
	}
	return arr;
}