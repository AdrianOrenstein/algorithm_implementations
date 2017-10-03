#include <vector>

using namespace std;

/*

Selection sort:

A list is divided into two parts:
	- Unsorted 	(right of i)
	- Sorted	(left of i)

This algorithm finds the smallest element in the unsorted list (starting at i),
swaps it with the unsorted element at i. Then shifts the focus of the algorithm
to the right.

Complexity: 
	Worst:		O(n^2)
	Average: 	O(n^2)
	Best: 		O(n^2)

*/
void selectionSort(vector<int>& arr)
{
	for (unsigned i = 0; i < arr.size(); ++i)
	{
		int minInt = i;

		for (unsigned j = i+1; j < arr.size(); ++j)
		{
			if (arr[j] < arr[minInt])
			{
				minInt = j;
			}
		}

		swap(arr[i], arr[minInt]);
	}
}