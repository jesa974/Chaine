char *trim(char *str); // Supprime les espaces
char *supprCaract (char *str, char carac); // Supprime un caractère donné en paramètre
char *suppr(char *str); // Supprime les retour a la ligne
int longChaine(char *chaine); // Renvoi la longueur de la chaine
void nbSeparation(char *chaine, int *nbSep, int position[10],char sep); // Renvoi le nombre de séparateurs ainsi que leur position dans la chaine
int compChaine(char *chaine1, char *chaine2); // Compare 2 chaines : -1 si différentes et 0 si égales
void copieChaine(char *dest, char *src); // Copie une chaine dans une autre
void concatChaine(char **dest, char *src); // Concatène deux chaines
void chaine(char *chaine, int *lgChaine, int *nbSep, int position[10], char sep); // Renvoi la longueur de la chaine et le nombre de séparateurs ainsi que leur position dans la chaine
void initResult(int *lgChaine, char ***resultat, int position[10], int *nbSep); // Initialise une variable résultat qui contiendra les différentes sous chaine
void sousChaine(char *chaine, int *lgChaine, char **resultat, int position[10], int *nbSep); // Divise la chaine principale en sous chaine
int Fill(char *chaine, char sep); // Vérifie la composition de la chaine  : -1 si que des séparateurs et 0 autre
void fonct(char *info, char ***R, int *nb, char sep); // 
int cpt_ligne(char *nomfichier); // Compte le nombre de lignes d'informations d'un fichier csv
int ordreAlpha(char *s1,char *s2); 
