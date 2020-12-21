/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    int count = 0;
    // Your code here
    int p = (m ^ n);
    while(p)
    {
        if(p&1) 
        {
            return (count+1);
        }
        count++;
        p = p>>1;
    }
    return (-1);
    
}
