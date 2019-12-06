Ce fichier contient les instructions nécessaires à l'utilisiation du Projet SD 
permettant de modéliser la trajectoire d'un point :


Lancement du programme 
==================================
Afin de lancer le programme, il faut en premier lieu lancer la commande make 
dans le terminal (au niveau du répertoire Projet SD) afin de créer le fichier 
executable projet, s'il n'est pas déjà existant. Il n'est pas nécessaire de 
relancer cette commande par la suite.

Pour lancer le programme, il faut taper la commande "./projet" dans le terminal
au  niveau du répertoire "Projet SD".

Tous les paramètres vous seront alors demandés dans l'ordre de manière explicite,
une fois la valeur du paramètre saisi au clavier, taper sur Entrée pour passer au
suivant. Il en sera de même avec la position initiale du point demandée successivement.


Affichage grapĥique
==================================
Un fichier "lorenz.dat" est créé à la fin du lancement du programme.
Celui-ci contient toutes les valeurs "temps x y z" du point au cours de sa trajectoire.
Assurez-vous d'avoir gnuplot installé.
Lancer gnuplot via la commande "gnuplot" dans le terminal
Saisir la commande ">set parametric" suivie de ">splot "lorenz.dat" u 2:3:4".
La courbe de la trajectoire correspondant aux paramètres saisis s'affiche alors.
