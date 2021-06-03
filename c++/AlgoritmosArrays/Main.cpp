#include <iostream>
#include <array>
#include "FillArray.h";
#include "SortArray.h";
#include "PrintArray.h"

using namespace std;

int main()
{
	// create array
	int arr[5] = {};

	// fill array
	int* f_arr;
	f_arr = Fill(arr, 5, 0, 20);

	// sort array
	int* s_arr;
	s_arr = InsertionSort(f_arr, 5);

	// print array
	Print(s_arr, 5);
}


