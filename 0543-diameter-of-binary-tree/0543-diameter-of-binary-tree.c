/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int diameter(struct TreeNode* root, int* ans){
    if(root == NULL){
         return 0;
    }
       
    int left = diameter(root->left, ans);
    int right = diameter(root->right, ans);

    if(*ans < left + right){
        *ans = left + right;
    }
    return left > right ? left + 1 : right + 1;
    
}
int diameterOfBinaryTree(struct TreeNode* root) {
    int ans = 0;
    diameter(root, &ans);
    return ans;
}