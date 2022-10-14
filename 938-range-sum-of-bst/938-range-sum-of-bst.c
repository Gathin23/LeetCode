/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int rangeSumBST(struct TreeNode* root, int low, int high){
     return (root->val >= low && root->val <= high ? root->val : 0) + // return value of current node if within range
        (root->left != NULL ? rangeSumBST(root->left, low, high) : 0) + // recurse through left node if it exists
        (root->right != NULL ? rangeSumBST(root->right, low, high) : 0);  // recurse through right node if it exists
}