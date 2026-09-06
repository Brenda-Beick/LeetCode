char* multiply(char* num1, char* num2) {
    int i = 0;
   
    if(sizeof(num1) == '0' || sizeof(num2) == '0'){
        return 0;
    }
    int n1 = strlen(num1);
    int n2 = strlen(num2);

    char *result = calloc(n1 + n2 + 1, sizeof(char));
   
        for(int i = n1 - 1; i >= 0; i--){
          for(int j = n2 - 1; j >= 0; j--){
            int k = i + j + 1;
            int res = (num1[i] - '0') * (num2[j] - '0');
            while(res){
                res += result[k];
                result[k] = (res)%10;
                res = res/10;
                k--; 
            }
        }
    }
    for(int i = 0; i < n1 + n2; i++){
        result[i] += '0';
    }

    if(result[0] == '0'){
        return result + 1;
    }
    return result;
}
