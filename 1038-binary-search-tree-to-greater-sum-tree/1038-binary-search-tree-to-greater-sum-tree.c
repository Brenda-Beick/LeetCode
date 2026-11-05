/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode* root, int* somaAcumulada){
    if(root == NULL){
        return;
    }

    inorder(root->right, somaAcumulada);
    *somaAcumulada += root->val;
    root->val = *somaAcumulada;
    inorder(root->left, somaAcumulada);
}


struct TreeNode* bstToGst(struct TreeNode* root) {
    int somaAcumulada = 0;
    inorder(root, &somaAcumulada);
    return root;
}