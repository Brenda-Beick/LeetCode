/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void traverseDFS(struct TreeNode* leftChild, struct TreeNode* rightChild, int level){
    if(leftChild == NULL || rightChild == NULL){
        return;
    }
    if(level % 2 != 0){
      int temp = leftChild->val;
      leftChild->val = rightChild->val;
      rightChild->val = temp;  
    }

    traverseDFS(leftChild->left, rightChild->right , level + 1);
    traverseDFS(leftChild->right, rightChild->left , level + 1);
}
struct TreeNode* reverseOddLevels(struct TreeNode* root) {
    if(root->left == NULL || root->right == NULL){
        return root;
    }
    traverseDFS(root->left, root->right , 1);
    return root;
}