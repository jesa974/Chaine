# Chaine

![GitHub contributors](https://img.shields.io/github/contributors/jesa974/Chaine?color=green&style=flat-square)
![GitHub top language](https://img.shields.io/github/languages/top/jesa974/Chaine?color=orange&label=C&style=flat-square)
![GitHub repo size](https://img.shields.io/github/repo-size/jesa974/Chaine?label=Project%20size&style=flat-square&color=lightgrey)
[![Visits Badge](https://badges.pufler.dev/visits/jesa974/Chaine)](https://badges.pufler.dev?style=for-the-badge)


Chaine is a C library with about the same functions as 'string.h' with some additional features listed below. 

---
## Functions

* **char *trim(char *str);** delete the spaces found into string
* **char *supprCaract(char *str, char carac);** delete a character given in paramater
* **char *suppr(char *str);** delete the '\n'
* **int longChaine(char *chaine);** return the length of the string
* **void nbSeparation(char *chaine, int *nbSep, int position[10],char sep);** return the number of separators given in parameter and their position in the string
* **int compChaine(char *chaine1, char *chaine2);** compare 2 strings and return -1 if different or 0 if same
* **void copieChaine(char *dest, char *src);** copy the src string in the dest string
* **void concatChaine(char **dest, char *src);** concatene 2 strings
* **void chaine(char *chaine, int *lgChaine, int *nbSep, int position[10], char sep);** return the length of the string, the number of separators given in parameter and their position in the string
* **void initResult(int *lgChaine, char ***resultat, int position[10], int *nbSep);** initialize a variable 'resultat' which will contain the different substrings
* **void sousChaine(char *chaine, int *lgChaine, char **resultat, int position[10], int *nbSep);** divide the main string into substrings
* **int Fill(char *chaine, char sep);** verify the composition of the string and return -1 if only separators and 0 if other case
* **int cpt_ligne(char *nomfichier);** return the number of information'lines from a csv file
* **int ordreAlpha(char *s1,char *s2);** return 1 if s1 is before s2 or 2 if s2 is before s1
* **void fonct(char *info, char ***R, int *nb, char sep);** main function unsing all the other function which return a table of substrings from a main string separating them using a separator given in parameter

---

### Setup

First, you have to include it in the makefile:
```
chaine.o: chaine.c chaine.h
	gcc -Wall -c chaine.c
```

Then, you have to include it in your other file using these functions:
```
#include chaine.h
```

That's it, you're good to go.
