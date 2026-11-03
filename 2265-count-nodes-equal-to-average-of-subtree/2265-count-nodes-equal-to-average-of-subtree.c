/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
    struct par{
        int soma;
        int qtd;
    };
 struct par somaContagem(struct TreeNode* no, int* resposta){

    if(no == NULL){
        struct par vazio = {0,0};
        return vazio;
    }

    struct par esq = somaContagem(no->left,resposta);
    struct par dir = somaContagem(no->right,resposta);

    int somaTotal = no->val + esq.soma + dir.soma;
    int qtdTotal = 1 + esq.qtd + dir.qtd;

    if(no->val == (somaTotal / qtdTotal)){
        (*resposta)++;
    }

    struct par resultado = {somaTotal,qtdTotal};
    return resultado;

 }


int averageOfSubtree(struct TreeNode* root) {
  int resposta = 0;
  somaContagem(root,&resposta);
  return resposta;
}