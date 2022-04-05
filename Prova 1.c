#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    int tamanho = 0;
    char resultado();
    printf("");
    scanf("%d", &tamanho);
    resultado(tamanho);
}

    
    
char resultado(int tamanho){
    char resposta[5];
    char string[50];

    for (int i=0;i<tamanho;i++)
     {
        char coringa[2];
        printf("");
        scanf("%s", resposta);
        if(strcmp(resposta, "#2=1") == 0)
        {
          //printf("a");
            strcpy(coringa,  "a");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#2=2") == 0)
        {
          //printf("b");
            strcpy(coringa,  "b");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#2=3") == 0)
        {
          //printf("c");
            strcpy(coringa,  "c");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#3=1") == 0)
        {
          //printf("d");
            strcpy(coringa,  "d");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#3=2") == 0)
        {
          //printf("e");
            strcpy(coringa,  "e");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#3=3") == 0)
        {
          //printf("f");
            strcpy(coringa,  "f");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#4=1") == 0)
        {
          //printf("g");
            strcpy(coringa,  "g");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#4=2") == 0)
        {
          //printf("h");
            strcpy(coringa,  "h");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#4=3") == 0)
        {
          //printf("i");
            strcpy(coringa,  "i");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#5=1") == 0)
        {
          //printf("j");
            strcpy(coringa,  "j");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#5=2") == 0)
        {
          //printf("k");
            strcpy(coringa,  "k");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#5=3") == 0)
        {
          //printf("l");
            strcpy(coringa,  "l");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#6=1") == 0)
        {
          //printf("m");
            strcpy(coringa,  "m");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#6=2") == 0)
        {
          //printf("n");
            strcpy(coringa,  "n");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#6=3") == 0)
        {
          //printf("o");
            strcpy(coringa,  "o");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#7=1") == 0)
        {
          //printf("p");
            strcpy(coringa,  "p");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#7=2") == 0)
        {
          //printf("q");
            strcpy(coringa,  "q");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#7=3") == 0)
        {
          //printf("r");
            strcpy(coringa,  "r");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#7=4") == 0)
        {
          //printf("s");
            strcpy(coringa,  "s");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#8=1") == 0)
        {
          //printf("t");
            strcpy(coringa,  "t");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#8=2") == 0)
        {
          //printf("u");
            strcpy(coringa,  "u");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#8=3") == 0)
        {
          //printf("v");
            strcpy(coringa,  "v");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#9=1") == 0)
        {
          //printf("w");
            strcpy(coringa,  "w");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#9=2") == 0)
        {
          //printf("x");
            strcpy(coringa,  "x");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#9=3") == 0)
        {
          //printf("y");
            strcpy(coringa,  "y");
            strcat(string, coringa);
        }
        if(strcmp(resposta, "#9=4") == 0)
        {
          //printf("z");
            strcpy(coringa,  "z");
            strcat(string, coringa);
        }
     }
    printf("%s", string);

    return 0;
}