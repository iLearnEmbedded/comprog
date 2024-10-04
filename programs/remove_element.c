/* https://leetcode.com/problems/remove-element/ */

int removeElement(int* nums, int numsSize, int val) {

// Arrange the elements with unused elements to the right
for(int i=0;i<numsSize;i++)
{
    for(int j=i;j<numsSize;j++)
    {
        if((nums[i] == val) && nums[j] != val)
        {
            nums[i] = nums[j];
            nums[j] = val;
        }
    }
}    

for(int i=0; i<numsSize; i++)
{
    printf("%d ",nums[i]);
    if(nums[i] == val)
        return i;
}

return numsSize;
    
}
