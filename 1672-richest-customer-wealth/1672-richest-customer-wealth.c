int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i, j,max = 0;
    
    for(i = 0; i < accountsSize; i++){
        int sum = 0;
        for(j = 0; j < accountsColSize[i];j++){
           sum += accounts[i][j];
        }
        if(sum > max)
            max = sum;
    }
    return max;
}