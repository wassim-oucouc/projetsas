#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>
 int choix;
struct etudiant{
char numero[MAX];
char nom[MAX];
char prenom[MAX];
char date[MAX];
char departement[MAX];
float note[MAX];

};

void    ajoute()
{

    struct etudiant e1;

    printf("entrer combien etudiant vous voulez entrer :");
    scanf("%d",&choix);
    for(int i = 0 ; i < choix ; i++)
    {
    printf("entrer le numero unique :");
    scanf("%d",e1.numero);
    printf("entrer le nom :");
    scanf("%s",e1.nom);
    printf("entrer le prenom :");
    scanf("%s",e1.prenom);
    printf("entrer Date de naissance :");
    scanf("%s",e1.date);
    printf("entrer la Departement : ");
    scanf("%s",e1.departement);
    printf("entrer la note génerale : ");
    scanf("%f",&e1.note);

}
}


void    modifier()
{
     struct etudiant e1;
     struct etudiant e2;
    char numerosearch[MAX];
    for(int i = 0 ; i < choix ; i++)
    {
         printf("entrer votre numero");
    scanf("%s",numerosearch);
    if(strcmp(numerosearch[i],e1[i].numero)
        {
            printf("entrer votre nouveau nom :");
            scanf("%s",e1[i].nom);
            printf("entrer votre nouveau prenom :");
            scanf("%s",e1[i].prenom);
            printf("entrer votre nouveau Date de naissance :");
            scanf("%s",e1[i].date);
            printf("entrer votre departement :");
            scanf("%s",e1[i].departement);
            printf("entrer votre nouveau note :");
            scanf("%f",e1[i].note);

            printf("votre informations est bien enregistrer!");

        }
    }


}











int main()
{
    /*
    int choix;
    printf("------------menu---------------\n");
    printf("1. pour ajouter taper 1\n");
    printf("2. pour modifier taper 2\n");
    printf("3. pour afficher taper 3\n ");
    printf("4. pour calculer la moyen taper 4\n");
    scanf("%d",&choix);
    switch(choix)
    {
    case 1 :
    */
    ajoute();
  /*  case 2 :
  */
    modifier();
    }

