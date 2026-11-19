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
 int inorder(int* array, struct TreeNode* root, int j){
    if(root != NULL){
        j = inorder(array,root->left,j);
        array[j++] = root->val;
        j = inorder(array,root->right,j);
    }
    return j;
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
int j = 0;
int* array = (int*)malloc(100*sizeof(int));
j = inorder(array,root,j);
*returnSize = j;
return array;

}