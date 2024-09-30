#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char instruction[1000];
    int position_x = 6;
    int position_y = 0;
    int i;

    printf("Veuillez entrer soit BAS_ , HAUT_ , GAUCHE_ , DROITE_ ?");
    scanf("%s",instruction);

    for (i = 0; instruction[i] != '\0'; i++) {
        if (instruction[i] == '_') {
            instruction[i] = ' ';
        }
    }

    char *token = strtok(instruction, " ");
        while (token != NULL) {
            if (strcmp(token, "HAUT") == 0) {
                position_y += 1;
            } else if (strcmp(token, "BAS") == 0) {
                if (position_y > -2) {
                    position_y -= 1; 
                }
            } else if (strcmp(token, "GAUCHE") == 0) {
                position_x -= 1; 
            } else if (strcmp(token, "DROITE") == 0) {
                position_x += 1;
            }
            token = strtok(NULL, " ");
        }
    printf("Le trésor se trouve à la position (%d, %d) avec une profondeur de %d\n", position_x, position_y, position_y);
}
