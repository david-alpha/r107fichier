#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *fichier = NULL;
    char texte[50];
    fichier = fopen("test.txt", "w");
    if (fichier != NULL){
		printf("veuillez saisir le texte a decortiquer :\n ");
		scanf("%[^\n]", &texte);
		//fprintf(fichier, "%s", texte);
		printf("\n %s \n",texte);
		fputs(texte, fichier);
		fclose(fichier);
    }

	return 1;

}