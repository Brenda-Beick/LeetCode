/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorder(struct TreeNode* root, int* num, int* size){
    if(!root){
        return;
    }
    num[(*size)++] = root->val;
    preorder(root->left, num, size);
    preorder(root->right, num, size);
    
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* num = (int*)malloc(100*sizeof(int));
    *returnSize = 0;
    preorder(root, num, returnSize);
    return num;
}