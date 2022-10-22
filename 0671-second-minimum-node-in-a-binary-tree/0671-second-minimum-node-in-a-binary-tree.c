/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode * root, int * temp, int * idx)
{
    if(root == NULL) return;
    inorder(root->left, temp, idx);
    temp[(*idx)++] = root->val;
    inorder(root->right, temp, idx);
}

int findSecondMinimumValue(struct TreeNode* root){
    int idx = 0;
    long min1 = LONG_MAX, min2 = min1;
    int * temp = (int *)malloc(25*sizeof(int));
    inorder(root, temp, &idx);
    for(int i=0; i<idx; i++)
        if(min1 > temp[i]) min1 = temp[i];
    for(int i=0; i<idx; i++)
        if(min1 == temp[i]) temp[i] = 0;
    for(int i=0; i<idx; i++)
        if(temp[i] != 0 && min2 > temp[i]) min2 = temp[i];
    return min2 == LONG_MAX ? -1 : min2;
}
