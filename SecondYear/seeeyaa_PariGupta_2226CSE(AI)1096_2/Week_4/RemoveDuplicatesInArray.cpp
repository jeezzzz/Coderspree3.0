int removeDuplicates(vector<int> &arr, int n) 
{
	 
      if (n <= 1) 
        return n; 
  
    int temp[n]; 

    int j = 0; 
  
    for (int i = 0; i < n - 1; i++) 
    {
        
        if (arr[i] != arr[i + 1]) 
            temp[j++] = arr[i]; 
  
    }
    
    temp[j++] = arr[n - 1]; 
  
    
    for (int i = 0; i < j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
}