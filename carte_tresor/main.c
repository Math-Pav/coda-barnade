#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char instruction[1000];
    int position = 0;
    printf("Bienvenue dans la carte au trésor de Barnadé !!!");
    printf("Veuillez entrer soit < ou > ?");
    scanf("%s",instruction);

    for (int i = 0; i < strlen(instruction); i++)
    {
        if (instruction[i] == '>'){
            position += 1;
        } else if (instruction[i] == '<')
        {
            position -=1;
        }
    }
    printf("Barnadé est à la postion %d\n",position);
    return 0;
}
