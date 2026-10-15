// Expression calculator

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum{
    OP_ADD = '+',
    OP_SUBTRACT = '-',
    OP_MULTIPLY = '*',
    OP_DIVIDE = '/'
}Operator;

struct token{
    bool isNum;
    double num;
    Operator op;
};

char *userInput(){
    printf("Input Expression \n");
    int inputLimit = 100;
    char *input = malloc(sizeof *input * inputLimit);

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
