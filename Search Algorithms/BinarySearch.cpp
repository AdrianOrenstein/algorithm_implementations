bool binarySearch(std::vector<int>& vectorInput, int desired)
{
	int i = 0;
    int j = vectorInput.size();
    
    while (i < j)
    {
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
        }
        else // If right of mid
        {
        	j = mid - 1;
        }
    }
    // If final element
    if (vectorInput[i] == desired)
    {
    	return true;
    }

    return false ;
}