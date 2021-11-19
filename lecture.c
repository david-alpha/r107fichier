#include <stdio.h>
#include <stdlib.h>
#include  <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
  int caractereLu, ligne=1;
  FILE *fichier = fopen("texte.txt","r+");
  char mot[100];
  if (fichier==NULL)
     exit(0);
  else
      rewind(fichier);
       while (caractereLu!=EOF && ligne<10)
       {
           caractereLu=fgetc(fichier);
           if (caractereLu=='\n')
                ligne++;
 
       }
 
    fgets(mot,100,fichier);
    printf("%s",mot);
 
  system("PAUSE");
  return 0;
}