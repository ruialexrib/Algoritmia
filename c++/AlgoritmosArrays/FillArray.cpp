#include <iostream>
#include <string>
#include "FillArray.h"

using namespace std;

int* Fill(int arr[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Enter a number for position " + to_string(i) + ":";
			cin >> arr[i];
			if (arr[i] < 0 || arr[i] > 20)
			{
				cout << "The number must be grater than " + to_string(min) + " and lesser than " + to_string(max) + "\n";
			}

		} while (arr[i] < min || arr[i] > max);
	}
	return arr;
}