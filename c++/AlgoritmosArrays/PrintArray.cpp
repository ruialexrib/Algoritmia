#include <iostream>
#include <string>
#include "PrintArray.h"

using namespace std;

void Print(int arr[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << to_string(arr[i]) + "\n";
	}
}
