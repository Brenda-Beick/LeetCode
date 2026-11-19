/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool evaluateTree(struct TreeNode* root) {
    if(root->left == NULL && root->right == NULL){
        return root->val;
    }

    bool evaluateTreeLeft = evaluateTree(root->left);
    bool evaluateTreeRight = evaluateTree(root->right);
    bool evaluateRoot;

    if(root->val == 2){
        evaluateRoot = evaluateTreeLeft || evaluateTreeRight;
    }else{
        evaluateRoot = evaluateTreeLeft && evaluateTreeRight;
    }

    return evaluateRoot;
}