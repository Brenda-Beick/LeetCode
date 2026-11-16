/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(!root) return 0;

    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return (maxLeft > maxRight ? maxLeft : maxRight) + 1;
}