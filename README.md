# Écrivez votre propre fonction printf.

## Description :
Le projet _printf consiste à créer une fonction personnalisée appelée \_printf, qui reproduit le comportement de la fonction standard printf en C. Cette fonction permet d’afficher des chaînes formatées sur la sortie standard (stdout) en fonction d’une chaîne de format fournie.


## Fonctionnalités
La fonction gère les spécificateurs de conversion suivants :\
Caractères : %c \
Chaînes de caractères : %s \
Pourcentage littéral : %% \
Entiers décimaux signés : %d, %i 

## Commande de Compilation
Pour compiler le projet, utilisez la commande suivante :
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Pré-requis

Pour exécuter ce projet, vous devrez vous assurez d'avoir les pré requis nécessaire.

`Ubuntu 20.04 LTS`

`GCC avec les options -Wall -Werror -Wextra -pedantic`



## Installation

Pour installer les outils requis, exécutez les commandes suivantes dans votre terminal :

```bash
sudo apt update
sudo apt install build-essential git
```
    
## Tests

Pour exécuter des tests, exécutez la commande suivante

```bash
$ gcc -o my_printf test.c _printf.c _putchar.c  -I .
$ ./my_printf
```
Chaque spécifier a été testé individuellement, puis collectivement. Le compteur de caractères imprimés (pour le retour) a été testé de manière simultanée aux précédents.

## Screenshots
Capture d'écran du fichier Test page 1 :
![Test File Page 1](https://www.hebergeur-image.com/upload/82.126.150.249-67483e1ea0de7.png)
Résultat du programme attendu :
![Sortie programme attendu](https://www.hebergeur-image.com/upload/82.126.150.249-67483d735b071.png)

## MAN page
Lien du fichier MAN page :

https://github.com/FullAuto33/holbertonschool-printf/blob/main/_printf.man

## Support

For support, email : 
djelloul.rouba@holbertonstudents.com
paul.lacroix@holbertonstudents.com


## Auteurs

- [@Rouba Djelloul](https://www.github.com/FullAuto33)
- [@Lacroix Paul](https://www.github.com/lacroixpaul)
