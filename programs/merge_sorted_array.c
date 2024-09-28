
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int arr_size = m+n;
    int temp = 0;
    /* Merge the arrays */
    for(int i=0 ; i<n ; i++)
    {
        nums1[i+m] = nums2[i];
    }

    /* Sort them now */
    for(int i=0; i<arr_size; i++)
    {
        for(int j=i; j<arr_size; j++)
        {
            if(nums1[j] < nums1[i])
            {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }

    
}
