# Le Juste Prix

## Description

Les habitants d'Algoréa aiment bien ériger des statues et les poser sur des socles majestueux. Selon les dimensions de la statue, le socle doit être plus ou moins haut et offrir une surface plus ou moins grande pour y poser la statue. Cependant, les constructeurs de statues ont souvent du mal à estimer la quantité de béton nécessaire à la construction de chaque socle. Vous souhaitez écrire un programme pour les aider.

## Instructions

Un socle est constitué d'étages, chaque étage ayant une hauteur égale à une unité et une base carrée. Le côté des carrés diminue de une unité à chaque étage.

Votre programme doit lire deux entiers, représentant respectivement la largeur du socle au niveau du sol et la largeur du socle au niveau de la face supérieure du socle. Il doit ensuite calculer et afficher le volume du socle.

## Exemples

### Example 1
Input:
7
3


Output:
135

Commentaires :
Le volume du premier étage est 7 × 7 = 49, le volume du second est 6 × 6 = 36, etc. et le volume du dernier étage est 3 × 3 = 9. Le volume total est donc : 7 × 7 + 6 × 6 + 5 × 5 + 4 × 4 + 3 × 3 = 135.
