# My_Sokoban

# Qu'est-ce que le Sokoban

Sokoban en japonais signifie garde d'entrepôt, il faut donc faire le travail de ce garde en poussant des caisses sur des espaces conçu pour elles, des zones de rangement.  On peut seulement des pousser et non les tirer mais on ne peut pas également pousser deux caisses pour rajouter de la difficulté et de la réflexion.  Le mieux dans ce genre de jeu est de finir un niveau en moins de déplacement possible.  Vous gagnez lorsque toutes les caisses sont placer sur une zone de rangement et vous perdez lorsque vous ne pouvez plus déplacer une caisse (par exemple en coincer une dans un angle et donc ne plus pouvoir la déplacer).

![220px-Sokoban_ani](https://user-images.githubusercontent.com/71844868/124367586-ced17b80-dc58-11eb-9032-bc69823ce628.gif)
 
# Utilisation

Pour commencer ce projet utilise un seul paramètre à mettre à la suite de l'exécution, c'est un fichier contenant une map comme celui-ci dessous :

![Cat_map](https://user-images.githubusercontent.com/71844868/124367217-85cbf800-dc55-11eb-978a-92d48d4ff2f7.png)

Il y en a déjà une dans le repo pour tester, si vous voulez vous pouvez designer vos propre carte et les passer en paramètre au projet comme ceci :

![commande_executio](https://user-images.githubusercontent.com/71844868/124367251-cdeb1a80-dc55-11eb-8c29-63c3b6144d47.png)

Avant de commencer à vous amuser avec le projet, comme il est créé en langage C, il faut le compiler.  Afin de compiler le projet je vous invite à entrer dans votre terminal la commande "make", qui aura pour but d'utiliser le makefile qui vas compiler à lui tout seule le projet pas besoin de la faire manuellement.  Vous pouvez voir ci-dessous un exemple de l'exécution de make dans un terminal :

![Mkae_du_projet](https://user-images.githubusercontent.com/71844868/124367298-481b9f00-dc56-11eb-907d-a06c91a391e7.png)

Une fois ceci fait exécutez le programme comme montré plus tôt et vous devriez avoir un rendu de ce style dans votre terminal :

![capture_du_jeu](https://user-images.githubusercontent.com/71844868/124367317-726d5c80-dc56-11eb-855b-ca8a5beae8b1.png)

Maintenant vous pouvez contrôler le caractère P, qui représente le garde d'entrepôt, en utilisant les fleches directionnel de votre clavier et vous pouvez donc déplacer les caisses (ici représenté par le caractère X) sur leurs zones de rangement (ici représenté par le caractère O).

Si vous avez placer toutes les caisses sur des socles le programme s'arrête et considère que vous avez gagné la partie.
Voici un exemple ci-dessous d'un joueur qui en poussant la dernière caisse vas gagner :

![win](https://user-images.githubusercontent.com/71844868/124367403-2242ca00-dc57-11eb-90b5-120396e14c43.png)
