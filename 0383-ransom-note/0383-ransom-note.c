bool canConstruct(char* ransomNote, char* magazine) {
    
    int array[26] = {};

    for( ; *magazine; ){
        int i = *(magazine) - 'a';
        array[i]++;
        *(magazine)++;
    }

    
    for( ;*ransomNote; ){
        int i = *(ransomNote) - 'a';
        array[i]--;
        if(array[i] == -1){
            return false;
        }
        *(ransomNote)++;
    }
 return true;
}