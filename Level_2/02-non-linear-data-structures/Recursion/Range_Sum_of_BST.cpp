/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int sum=0;
void order(TreeNode * root ,int low ,int high){
    if(!root) return ;
    if(root->val<=high && root->val >=low){
        sum+=root->val;
    }
    order(root->left,low,high);
    order(root->right,low,high);
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        order(root,low,high);
        return sum;
    }
};