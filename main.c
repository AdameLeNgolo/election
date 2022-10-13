#include <stdio.h>
#include <stdlib.h>

int main()
{
    int typeElection,nbCandidats;

    do{
        printf("Welcome to this app!\n");
        printf("******* SELECTIONNER UNE OPTION *******\n");
        printf("******* 1- ELECTION PRESIDENTIELLE *******\n");
        printf("******* 2- ELECTION LEGISLATIVE *******\n");
        scanf("%d",&typeElection);
    }while(!(typeElection == 1 || typeElection == 2));

    switch (typeElection){
        case 1:
            printf("**** Bienvenue dans cette partie de l'election presidentielle ****\n");
            do{
                printf("Pour commencer merci de selectionner le nombre de candidats:");
                scanf("%d",&nbCandidats);

            }while(nbCandidats <= 0);

            printf("%d Candidats ont ete approuves",&nbCandidats);

            break;
        case 2:
            break;
        default:
            printf("Vous venez de quitter l'application");
    }

    return 0;
}
