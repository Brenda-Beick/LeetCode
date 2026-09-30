char* multiply(char* num1, char* num2) {
    int n1 = strlen(num1);
    int n2 = strlen(num2);

        if ((n1 == 1 && num1[0] == '0') || (n2 == 1 && num2[0] == '0')) {
        char* res = (char*)malloc(2);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }



    int *result = (int*)calloc(n1 + n2 , sizeof(int));
   
        for(int i = n1 - 1; i >= 0; i--){
          for(int j = n2 - 1; j >= 0; j--){
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i+j+1];
            result[i+j+1] = sum % 10;
            result[i+j] += sum/10;
        }
    }
     int i = 0;
    while (i < n1 + n2 && result[i] == 0) i++;
    int size = n1 + n2 - i;
    char* res = (char*)malloc(size + 1);
    for (int k = 0; k < size; k++) res[k] = result[i + k] + '0';
    res[size] = '\0';
    free(result);
    return res;
}