/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char **answer = (char**)malloc(n*sizeof(char*));

    for(int i = 1; i <= n; i++){
        answer[i-1] = malloc(9*sizeof(char));
        if((i%3 == 0) && (i%5 == 0)){
             answer[i-1] = "FizzBuzz";
             } else{
                if(i%3 == 0){ 
                    answer[i-1] = "Fizz";
                }else{
                    if(i%5 == 0){
                       answer[i-1] = "Buzz";
                        } else{
                            sprintf(answer[i-1],"%d",i);
                            }
                        }
                    }
                           
    }
    return answer;
}