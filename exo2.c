#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *fichier = NULL;
	char lecture;
	char texte[50];
	/*Oouverture du fichier pour l'écriture*/
    fichier = fopen("test.txt", "a");
	/*Récupération des mots*/
	do{
		printf("Ecrire un mot ou 1 pour terminer\n");
		scanf("%s",&texte);
		fputs(texte, fichier);
		fputs("\n", fichier);
		printf("\n mot : %s \n",texte);
		
	}while(strcmp("1",texte)!=0);
	fclose(fichier);
	/*ouverture du fichier pour la lecture */
	fichier = fopen("test.txt", "rt");
	/*Lecture du fichier*/
	while((lecture=fgetc(fichier))!=EOF){
        printf("%c",lecture);
    }
	fclose(fichier);
	return 1;

}