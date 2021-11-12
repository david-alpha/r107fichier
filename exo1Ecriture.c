#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *fichier = NULL;
	int i, max = 2;
    fichier = fopen("test.txt", "w");
	char *mots[1];
	mots[0]="toto";
	printf("\n mot : %s \n",mots[0]);
	
	mots[1]="titi";
	for (i=0;i<2;i++){
		fputs(mots[i], fichier);
    }
	fclose(fichier);
	return 1;

}