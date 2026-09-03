int numberOfSteps(int num) {
    int step;

    for(step = 0; num > 0; step++){
        if(num % 2 == 0)
            num = num/2;
        else
            num--;
    }

    return step;
}