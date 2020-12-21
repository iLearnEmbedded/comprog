// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b){
    
    // Your logic here
    int count = 0;
    int c = a ^ b;
    
    while(c > 0)
    {
        if(c & 1)
        {
            count++;
        }
        c = c>>1;
    }
    return count;
    
}
