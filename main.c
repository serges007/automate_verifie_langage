#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

int main(){
	int choix;
	FILE *fichier = NULL;
	char ligne[TAILLE_MAX] = " ";
	do {
		printf("Tapez :\n");
		printf("\t 1-  pour l'analyse lexicale du fichier existant \n");
		printf("\t 2-  pour inserer une chaine pour l'analyse lexicale\n");
		printf("\t 3-  pour inserer une chaine pour l'analyse lexicale\n");
		printf("\t 0-  quitter\n");
		printf("\t\tChoix : ");
		scanf("%d", &choix);
		switch (choix) {
			case 0: break;
			case 1:
				fichier = fopen("texte.txt","r");
				//	enregistreChaine();
				if(fichier != NULL){
					while(fgets(ligne,TAILLE_MAX,fichier) != NULL){
						decoupeChaine(ligne);
					}
				}
				break;
			case 2:
				fichier = fopen("test.txt","r");
				enregistreChaine();
				if(fichier != NULL){
					while(fgets(ligne,TAILLE_MAX,fichier) != NULL){
					decoupeChaine(ligne);
					}
				}
			   	break;
			case 3:
				fichier = fopen("texte.txt","r");
				enregistreChemin();
				if(fichier != NULL){
					while(fgets(ligne,TAILLE_MAX,fichier) != NULL){
						decoupeChaine(ligne);
					}
				}

				break;
			default: printf("erreur...\n"); break;
		}
	} while (choix !=0);

	return 0;
}
