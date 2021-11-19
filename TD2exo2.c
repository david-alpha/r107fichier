#include <stdio.h>
#include <stdlib.h>

void main(){
   FILE *fil;
   int *nb1,*nb2,*res,Nligne,Nb1,Nb2,i;
   char *op,Op;
   fil=fopen("operations.txt","r+");
   if (fil==NULL)
      printf("Pb d'ouverture.\n");
   else{
      Nligne=0;
      while(feof(fil)==0){
        	fscanf(fil,"%d %c %d\n",&Nb1,&Op,&Nb2);
            Nligne++;
      }
      nb1=(int *)malloc(Nligne*sizeof(int));
      nb2=(int *)malloc(Nligne*sizeof(int));	
      res=(int *)malloc(Nligne*sizeof(int));
      op=(char *)malloc(Nligne*sizeof(char));
	  rewind(fil);
	  for (i=0;i<Nligne;i++){
		  // recuperer le contenu de chaque ligne
       	fscanf(fil,"%d %c %d\n",nb1+i,op+i,nb2+i);
		// calculer dans res le résultat de chaque opération
        if (*(op+i)=='+')
             *(res+i)=*(nb1+i)+*(nb2+i);
		else{
            if (*(op+i)=='-')
             *(res+i)=*(nb1+i)-*(nb2+i);
		    else{  
			    if (*(op+i)=='*')
                  *(res+i)=*(nb1+i)*(*(nb2+i));
				else
                  *(res+i)=*(nb1+i)/(*(nb2+i));	
			}
		}
	  }		
	  rewind(fil);
	  for (i=0;i<Nligne;i++){
          fprintf(fil,"%d %c %d %c %d\n",*(nb1+i),*(op+i),*(nb2+i),'=',*(res+i));
	  }		  
				


		
   }
   fclose(fil);

}