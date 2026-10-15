// Expression calculator

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *userInput(){
    printf("Input Expression \n");
    char *input = malloc(sizeof *input * 100);
    int inputLimit = 0;

    if(input == NULL){
        printf("Error. Memory allocation returns NULL. \n");
        return NULL;
    }

    if(fgets(input, inputLimit, stdin) != NULL){
    input[strcspn(input, "\n")] = '\0';
    }
    else{
        return NULL;
    }

    return input;
}

int main(void){return 0;}
