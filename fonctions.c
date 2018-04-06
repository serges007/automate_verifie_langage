/***********************************************************************/
/**************  Développement serge Mbele Amoungui *********************/
/**** devoir automate : verifcation si un mot appartient au langage ****/
/**langage : mot ne commençant pas par un chiffre mais par une lettre***/
/**********et pouvant contenir des lettre et des chiffre****************/
/***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

/*chaine constante pour le mot reconnu par le langage*/
const char *reconnu = "identificateur";
/*chaine constante pour mot non reconnu par le langage*/
const char *non_reconnu = "mot non reconnu";
const char *integer = "Entier";
const char *real = "Reel";

void viderBuffer(){
	int c = 0;
	while (c != '\n' && c != EOF){
		c = getchar();
	}
}

/*
 *@function valide permet de verifier si le mot lu est valide c-a-d est reconnu pas le langage
 *@param char *mot
 *@return void
 */
void valide(char *mot){
	int i = 0;
	i = strtol(mot,NULL,10);
	if(i == 0){
		printf("------------------------------------------------------------------------\n");
		printf("le mot %s        --->     est un identificateur\n",mot);
		system("pause 3");
		insert(mot,reconnu);
	}else{
		isReal(mot);
		isInteger(mot);
	}
}
/*
 *@function insert permet d'insert le mot verifier dans le fichier
 *@param char *mot, const char *
 *@return void
 */
void insert(char *mot,const char *val){
	FILE *donnees = NULL;
	donnees = fopen("Automate.txt","a");
	if(donnees != NULL){
		fprintf(donnees,"----------------------------------------------\n");
		fprintf(donnees,"%s     ---->   %s \n",mot,val);
	}
	fclose(donnees);
}

/*

 *@function decoupeChaine permet de decouper une chaine de caractère en mot en fonction des separateur indiqués
 *@param char *ligne
 *@return void
 */
void decoupeChaine(char *ligne){
	char *s, *mot;
	s = ligne;
	if ((mot = strtok(s, " ,;!?'&/*: _£$%`[]={}~")) != NULL)
		valide(mot);
	s = NULL;
  	while ((mot = strtok(s, " ,();!?'&/*: _£$%`[]={}~")) != NULL)
		valide(mot);
}

/*
 *@function verifie permet
 *@param char *mot int i
 *@return int
 */
int verifie(char *mot,int i){
	int j=0,lg=strlen(mot);
	char *ch;
	sprintf(ch,"%d",j);
	int l = strlen(ch);
	for(j=0;j<lg;j++){
		if(mot[l+1] = 'e'){
			return 1;
		}
	}
}

/*
 *@function isInteger verifie si une chaine de caractère est un entier
 *@param char *mot
 *@return void
 */
void isInteger(char *mot){
	int nbre = 0;
	char *pos = malloc(sizeof(*pos));
	if(mot[0] != '-'){
		nbre = strtol(mot,NULL,10);
		sprintf(pos,"%d",nbre);
		if(nbre != 0 ){
			printf("------------------------------------------------------------------------\n");
			printf("le symbole %d      --->     est un entier\n",nbre);
			system("pause 3");
			insert(pos,integer);
		}
	}

}

/*
 *@function validInt verifie si le mot respect  la synthaxe d'un entier
 *@param char *mot
 *@return void
 */
void validInt(char *mot){
	char *s, *symbol;
	int i = 0;
	for(i=0;mot[i]!='\0';i++){
		if(mot[i] == '-'){
//			symbol[i] = mot[i];
		}else{
			isInteger(mot);
		}
	}
}

/*
 *@function isReal verifie si une chaine de caractère est un reel
 *@param char *mot
 *@return void
 */
void isReal(char *mot){
	double i = 0.0;
	int nbre = 0;
	i = strtod(mot,NULL);
	if( i != 0.0){
		printf("------------------------------------------------------------------------\n");
		printf("le symbole %f ---> est un reel\n",i);
		system("pause 3");
		insert(mot,real);
	}
}

/*
 *@function validReel verifie si le mot respect  la synthaxe d'un reel
 *@param char *ligne
 *@return void
 */
void validReal(char *mot){
	char *s, *symbol;
	s = mot;
	if((symbol = strtok(s, " ,;!?'&/*: _£$%`[]{}~"))!=NULL)
		isReal(symbol);
	s = NULL;
  	while ((mot = strtok(s, " ,();!?'&/*:_£$%`[]{}~")) != NULL)
		isReal(symbol);
}

/*
 *@function
 *@param char *mot
 *@return int
 */
int trueReal(char *mot){
	char *s, *symbol;
	s = mot;
	if((symbol = strtok(s, " ,;!?'&/*: _£$%`[]{}~"))!=NULL)
		return 1;
	else
		return 0;
}

/*
 *@function enregistreChaine permet d'enregistrer une chaine dans un fichier
 *@param void
 *@return void
 */
void enregistreChaine(){
	char chaine[TAILLE_MAX];
	FILE *fichier = NULL;
	if(chaine == NULL){
		exit(EXIT_FAILURE);
	}
	fichier = fopen("test.txt","a");
	if(fichier != NULL){
		printf("Entrez le mot a évaluer\n");
		viderBuffer();
		scanf("%s",chaine);
		printf("la chaine inserer est : %s\n",chaine);
		fprintf(fichier,"  %s  ",chaine);
	}
	fclose(fichier);
}
/*
 *@function enregistreChaine permet d'enregistrer une chaine dans un fichier
 *@param void
 *@return void
 */
void enregistreChemin(){
	char chaine[TAILLE_MAX];
	FILE *fichier = NULL;
	char *name = malloc(sizeof(*name));
	if(name == NULL){
		exit(EXIT_FAILURE);
	}
	printf("Donnez le chemin du fichier à effectuer l'analyse lexicale\n");
	viderBuffer();
	scanf("%s",name);
//	fgets(name,TAILLE_MAX,stdin);
	fichier = fopen(name, "a");
	if(fichier != NULL){
		viderBuffer();
		printf("Entrez le mot a évaluer\n");
		scanf("%s",chaine);
		printf("la chaine inserer est : %s\n",chaine);
		fprintf(fichier,"  %s  ",chaine);
	}

	fclose(fichier);
}

