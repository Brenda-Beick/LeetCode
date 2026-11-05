#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

char* decodeString(char* s) {
    int countStack[MAX_SIZE];
    char* stringStack[MAX_SIZE];
    int top = -1;

    int k = 0;
    int currentStrCapacity = 256;
    char* currentStr = (char*)malloc(currentStrCapacity * sizeof(char));
    currentStr[0] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            k = k * 10 + (s[i] - '0');
        } 
        else if (s[i] == '[') {
            countStack[++top] = k;
            stringStack[top] = currentStr;
            
            k = 0;
            currentStrCapacity = 256;
            currentStr = (char*)malloc(currentStrCapacity * sizeof(char));
            currentStr[0] = '\0';
        } 
        else if (s[i] == ']') {
            int repeatCount = countStack[top];
            char* prevStr = stringStack[top];
            top--;

            int prevLen = strlen(prevStr);
            int currLen = strlen(currentStr);
            int newLen = prevLen + repeatCount * currLen;

            if (newLen >= currentStrCapacity) {
                currentStrCapacity = newLen + 256;
                prevStr = (char*)realloc(prevStr, currentStrCapacity * sizeof(char));
            }

            for (int r = 0; r < repeatCount; r++) {
                strcat(prevStr, currentStr);
            }

            free(currentStr);
            currentStr = prevStr;
        } 
        else {
            int len = strlen(currentStr);
            if (len + 2 >= currentStrCapacity) {
                currentStrCapacity *= 2;
                currentStr = (char*)realloc(currentStr, currentStrCapacity * sizeof(char));
            }
            currentStr[len] = s[i];
            currentStr[len + 1] = '\0';
        }
    }

    return currentStr;
}



    