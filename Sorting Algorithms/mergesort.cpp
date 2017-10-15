#include <vector>

using namespace std;

/*

Merge sort:

This algorithm uses a divide and conquer approach to sorting, whereby it
divides up the array in halves until it reaches a single element.

Then it sorts the list by merging sublists where the 'head' of each list
is compared to the next, placing the smallest first to the new ordered list.

Complexity: 
	Worst:		O(n*log(n))
	Average: 	O(n*log(n))
	Best: 		O(n*log(n))

*/
vector<int> mergeSort(vector<int> arr)
{
	// Base case
	if (arr.size() <= 1)
	{
		return arr;
	}

	int middle = arr.size() / 2;

	vector<int> left(middle);
	for (unsigned i = 0; i < middle; ++i)
	{
		left.push_back(arr[i]);
	}

	vector<int> right(middle);
	for (unsigned i = middle; i < arr.size(); ++i)
	{
		right.push_back(arr[i]);
	}

	left = mergeSort(left);
	right = mergeSort(right);

	vector<int> result(arr.size());
	result = merge(left, right);

	left.insert(left.end(), right.begin(), right.end());
}