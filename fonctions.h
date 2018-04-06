#ifndef PROTOTYPE_H_INCLUDED
#define PROTOTYPE_H_INCLUDED

#define TAILLE_MAX 100000

/*
 *@function valide permet de verifier si le mot lu est valide c-a-d est reconnu pas le langage
 *@param char *mot
 *@return void
 */
void valide(char *mot);

/*
 *@function insert permet d'insert le mot verifier dans le fichier
 *@param char *mot, const char *
 *@return void
 */
void insert(char *mot,const char *val);

/*
 *@function decoupeChaine permet de decouper une chaine de caractère en mot en fonction des separateur indiqués
 *@param char *ligne
 *@return void
 */
void decoupeChaine(char *ligne);

/*
 *@function isInteger verifie si une chaine de caractère est un entier
 *@param char *mot
 *@return void
 */
void isInteger(char *mot);

/*
 *@function isReal verifie si une chaine de caractère est un reel
 *@param char *mot
 *@return void
 */
void isReal(char *mot);

/*
 *@function validInt verifie si le mot respect  la synthaxe d'un entier
 *@param char *mot
 *@return void
 */
void validInt(char *mot);

/*
 *@function validReel verifie si le mot respect  la synthaxe d'un reel
 *@param char *ligne
 *@return void
 */
void validReal(char *mot);

void inverse_chaine(char *mot);
int long_chaine(char *mot);

/*
 *@function verifie permet
 *@param char *mot int i
 *@return int
 */
int verifie(char *mot,int i);

/*
 *@function
 *@param char *mot
 *@return int
 */
int trueReal(char *mot);

/*
 *@function enregistreChaine permet d'enregistrer une chaine dans un fichier
 *@param void
 *@return void
 */
void enregistreChaine();

/*
 *@function enregistreChemin permet d'enregistrer le chemin d'un fichier
 *@param void
 *@return void
 */
void enregistreChemin();
void viderBuffer();
#endif // PROTOTYPE_H_INCLUDED
