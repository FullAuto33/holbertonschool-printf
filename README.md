
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
root@eb8cd8b9f4c847379ef5148a3e4c4498-2377118072:/holbertonschool-printf# gcc -o my_printf test.c _printf.c _putchar.c  -I .
root@eb8cd8b9f4c847379ef5148a3e4c4498-2377118072:/holbertonschool-printf# ./my_printf 
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Test % simple
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%%]
Percent:[%]
Len:[13]
Len:[12]
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
![Test File Page 1](https://www.hebergeur-image.com/upload/82.126.150.249-67482b33eba13.png)
Capture d'écran du fichier Test page 2 :
![Test File Page 2](https://www.hebergeur-image.com/upload/82.126.150.249-67482ab5c23d9.png)
Résultat reçu du programme :
![Sortie programme recu](https://www.hebergeur-image.com/upload/82.126.150.249-67482c7175f97.png)
Résultat du programme attendu :
![Sortie programme attendu](https://www.hebergeur-image.com/upload/82.126.150.249-67482cdc212c3.png)



## Support

For support, email djelloul.rouba@holbertonstudents.com


## Auteurs

- [@Rouba Djelloul](https://www.github.com/FullAuto33)
- [@Lacroix Paul](https://www.github.com/lacroixpaul)
