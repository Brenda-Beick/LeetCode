char* predictPartyVictory(char* senate) {
    int rad = 0;
    int dir = 0;
    int i, altura,l,cabeca = 0;
    int countRad = 0;
    int countDir = 0;
    char c;

    for(i = 0;senate[i] != '\0'; ++i){
        if(senate[i] == 'R'){
            ++countRad;
        }else{
            ++countDir;
        }
    }

    altura = i;
    l = i + 1;
    while(countRad > 0 && countDir > 0){
        c = senate[cabeca];
        cabeca = (cabeca + 1) % l;
        if(c == 'R'){
            if(rad > 0){
                --rad;
                --countRad;
            }else{
                ++dir;
                senate[altura] = 'R';
                altura = (altura + 1) % l;
             }   
        }else{
            if(dir > 0){
                --dir;
                --countDir;
            }else{
                ++rad;
                senate[altura] = 'D';
                altura = (altura + 1) % l;
            }
        }

    
    }
    return countDir > 0 ? "Dire" : "Radiant";
}