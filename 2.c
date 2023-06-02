#include <stdio.h>
#include <string.h>

char* join(char* words[], int n) {
    char* result = malloc(255);
    for (int i = 0; i < n; i++) {
        strcat(result, words[i]);
        strcat(result, " ");
    }
    result[strlen(result) - 1] = '\0';
    return result;
}

int main(){
    char* words[14] = {"I", "like", "to", "program"};
    printf("%s ", join(words, 4));
}