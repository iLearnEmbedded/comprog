//LeetCode Problem URL: https://leetcode.com/problems/sum-of-left-leaves/ 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum_of_left;

void check_left_leaves(struct TreeNode* node,int left_flag)
{
    if(node == NULL)
        return;    
    if((node->right == NULL) && (node->left == NULL) && left_flag)
    {
        sum_of_left+= node->val;
        return;
    }
    
    check_left_leaves(node->left,1);
    check_left_leaves(node->right,0);
    
}
int sumOfLeftLeaves(struct TreeNode* root){
    sum_of_left = 0;
    check_left_leaves(root,0);
    return sum_of_left;
}
