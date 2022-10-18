/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool evaluateTree(struct TreeNode* root){
	if( (root->left!=NULL) && (root->right!= NULL) ){
        evaluateTree(root->left);
        evaluateTree(root->right);
        if(root->val == 2){ root->val = (root->left->val || root->right->val); }
        else if(root->val == 3){   root->val = (root->left->val && root->right->val); }
    }
    return root->val;
}