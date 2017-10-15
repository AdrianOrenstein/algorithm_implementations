bool recursiveBinarySearch(std::vector<int>& vectorInput, int desired, int left, int right)
{
    int i = left;
    int j = right;

    if (i > j)
    {
        // not found
        return false;
    } 

    int mid = (i + j) /2;

    // If mid is our desired value
    if (vectorInput[mid] == desired)
    {
        return true;
    }

    // If the desired value is left of mid
    if (vectorInput[mid] < desired)
    {
        i = mid + 1;
        search(vectorInput, desired, i, j);
    }
    else // If right of mid
    {
        j = mid - 1;
        search(vectorInput, desired, i, j);
    }
}