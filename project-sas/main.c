#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>

 int count;
 struct datenaissance{
 int    jour;
 int    mois;
 int    annee;
 };



struct etudiant{;
int numero;
char nom[MAX];
char prenom[MAX];
struct datenaissance d;
char departement[MAX];
float note;
};

 struct etudiant e1[MAX];
  struct etudiant e2[MAX];
  struct etudiant e3[MAX];
void    ajoute()
{



    printf("entrer combien etudiant vous voulez entrer :");
    scanf("%d",&count);

    for(int i = 0 ; i < count ; i++)
    {
    printf("entrer le numero unique:");
    scanf("%d",&e1[i].numero);
    printf("entrer le nom :");
    scanf("%s",&e1[i].nom);
    printf("entrer le prenom :");
    scanf("%s",&e1[i].prenom);
    printf("entrer Date de naissance :");
    printf("jour :");
     scanf("%d",&e1[i].d.jour);
     printf("mois :");
    scanf("%d",&e1[i].d.mois);
    printf("annee :");
     scanf("%d",&e1[i].d.annee);
    printf("entrer la Departement : ");
    scanf("%s",&e1[i].departement);
    printf("entrer la note generale :");
    scanf("%f",&e1[i].note);

}
}



void    afficher()
{
    printf("vos informations :\n");
    for(int i = 0 ; i < count ; i++ )
    {
        printf ("le nom : %s\n",e1[i].nom);
        printf("le prenom : %s\n",e1[i].prenom);
        printf("la date de naissance :\n");
        printf("la date de jour : %d\n",e1[i].d.jour);
        printf("la date de mois : %d\n",e1[i].d.mois);
        printf("la date de annee : %d\n",e1[i].d.annee);
        printf("la departement : %s\n",e1[i].departement);
        printf("la note general est : %f\n",e1[i].note);


        }
}

void    modifier()
{
    int num;
    for(int i = 0 ; i < count ; i++)
    {
    printf("entrer le numero unique :");
    scanf("%d",&num);
    if(num == e1[i].numero)
    {
        printf("entrer des nouveau informations!\n");
        printf("entrer nouveau nom :");
        scanf("%s",&e2[i].nom);
        printf("entrer nouveau prenom :");
        scanf("%s",&e2[i].prenom);
        printf("entrer date de naissance :");
        printf("jour :");
        scanf("%d",&e2[i].d.jour);
        printf("mois :");
        scanf("%d",&e2[i].d.mois);
        printf("annee :");
        scanf("%d",&e2[i].d.annee);
        printf("entrer departement :");
        scanf("%s",&e2[i].departement);
        printf("entrer la note general :");
        scanf("%f",&e2[i].note);



        e1[i].d.jour = e2[i].d.jour;
         e1[i].d.mois = e2[i].d.mois;
          e1[i].d.annee = e2[i].d.annee;
          strcpy(e1[i].nom,e2[i].nom);
        strcpy(e1[i].prenom,e2[i].prenom);
        strcpy(e1[i].departement,e2[i].departement);
        e1[i].note = e2[i].note;

        printf("Les informations est bien Enregistrer!\n");

      //  printf ("le nouveau nom : %s\n",e1[i].nom);
      //  printf("le nouveau prenom : %s",e1[i].prenom);
    //    printf("la nouveau date de naissance : %d",e1[i].d.mois);
     //   printf("la nouveau departement : %s",e1[i].departement);
      //  printf("la nouveau note general est : %f",e1[i].note);



    }
    else
    printf("informations est incorrect merci de ressayer!\n");
    }
}

void    supression()
{
    int i;
    int numero_supp;
    int j;

    printf("entrer le numero unique");
    scanf("%d",&numero_supp);

    for(i = 0 ; i < count ; i++)
    {
        if(numero_supp == e1[i].numero)
        {
            for(i = j ;j < count-1 ; j++)
            {
                e1[j] = e1[j + 1];
                ;
            }
            count--;
            printf("ce etudiant est bien supprimer!\n");

        }
        else{
        printf("etudiant pas supprimer merci de verifier votre numero!\n");
        }
    }
}

void calcule()
{
    int somme = 0;
    int moyen = 0;
    int count;
    int i;
    printf("entrer la departement :");
    scanf("%s",&e3[i].departement);
    for(int i = 0 ; i < count ; i++)
    {
        if(strcmp(e3[i].departement,e1[i].departement) == 0)
        {
            count++;
            somme = somme + e3[i].note;
            moyen = somme/count;
            printf("la moyen general de cette departement est %d",moyen);
            }
    }

}

void    statique()
{
    for(int i = 0 ; i < count ; i++)
    {
          if(e1[i].note >= 10)
        {
        printf("la moyenne general de seuil de 10 ou egal %f",e1[i].note);
        }

        printf("la nombre total %d",count);
    }
}


















int main()
{
    int choix;
     while(choix != 0)
     {
    printf("1. Ajouter un etudiant\n");
         printf("2. Modifier un etudiant\n");
         printf("3. afficher un etudiant\n");
         printf("4. supprimer un etudiant \n");
         printf("5. moyenne generale\n");
         printf("6. statistiques\n");
         printf("7. Rechercher\n");
         printf("Entrer Votre Choix :\n" );
         scanf("%d",&choix);
             switch(choix)
            {
        case 0 :
       printf("choix incorrect ressayer!!");

        case 1 :
            ajoute();
            break;
        case 2 :
            modifier();

            break;
        case 3 :
              afficher();
              break;
        case 4 :
            supression();
            break;
        case 5 :
            calcule();
        }
        }
}

