// Function to check power of two
bool isPowerofTwo(long long n){
    
    // Your code here    
    int pow_var = 0;
    long long  value = 0;
    while(value < n)
    {
        value = (1<<(pow_var++));
        if((value | n) == value)
        {
            return 1;
        }
    }
    return 0;
    
}
