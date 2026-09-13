int max(int a, int b){return a > b ? a : b;}
int maxSubArray(int* nums, int numsSize) {
    int soma = nums[0];
    int maior_soma = nums[0];
    
    for(int i = 1; i < numsSize; i++){
        soma = max(nums[i],soma + nums[i]);
        maior_soma = max(maior_soma, soma);
    }

    return maior_soma;
}
