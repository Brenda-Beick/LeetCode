/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
  
    int *ans = (int*)malloc(matrixSize * sizeof(int));

    for(int i = 0; i < matrixSize; i++){
        ans[i] = 0;
    }
    
    *returnSize = matrixSize;
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < *matrixColSize; j++){
            if(matrix[i][j] == 1){
                ans[i]++;
            }
        }
    }
    return ans;
}