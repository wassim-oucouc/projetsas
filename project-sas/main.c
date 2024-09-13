#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>

 int count = 0;
 struct datenaissance{
 int    jour;
 int    mois;
 int    annee;
 };



struct etudiant{
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
  int   der_numero = 1;
void    ajoute()
{




    printf("entrer le numero unique:");
    scanf("%d",&e1[count].numero);
    printf("entrer le nom :");
    scanf("%s",&e1[count].nom);
    printf("entrer le prenom :");
    scanf("%s",&e1[count].prenom);
    printf("entrer Date de naissance :");
    printf("jour :");
     scanf("%d",&e1[count].d.jour);
     printf("mois :");
    scanf("%d",&e1[count].d.mois);
    printf("annee :");
     scanf("%d",&e1[count].d.annee);
    printf("entrer la Departement : ");
    scanf("%s",&e1[count].departement);
    printf("entrer la note generale :");
    scanf("%f",&e1[count].note);

}



void    afficher()
{
    printf("vos informations :\n");
    for(int i = 0 ; i < count ; i++)
    {
        printf("\n");
        printf("le nom : %s\n",e1[i].nom);
        printf("le prenom : %s\n",e1[i].prenom);
        printf("la date de naissance :\n");
        printf("la date de jour : %d\n",e1[i].d.jour);
        printf("la date de mois : %d\n",e1[i].d.mois);
        printf("la date de annee : %d\n",e1[i].d.annee);
        printf("la departement : %s\n",e1[i].departement);
        printf("la note general est : %f\n",e1[i].note);
        printf("----------------------------------------------------------------------");


        }
}

void    modifier()
{
    int found = 0;
    int num;
    printf("entrer le numero unique :");
    scanf("%d",&num);
    for(int i = 0 ; i < count ; i++)
    {
    if(num == e1[i].numero)
    {
        found = 1;
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
}
if(!found)
    {
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
            for(j = i ;j < count-1 ; j++)
            {
                e1[j] = e1[j + 1];
            }
            count--;
            printf("ce etudiant est bien supprimer!\n");

        }
        else if(numero_supp != e1[i].numero)
        printf("ce etudiant est pas exist!");
        }
}


void calcule()
{
    int somme = 0;
    int counter = 0;
    char depart[100];
    printf("entrer la departement :");
    scanf("%s",depart);
    for(int i = 0 ; i < count ; i++)
    {
        if(strcasecmp(depart,e1[i].departement) == 0)
        {
        somme = somme + e1[i].note;
          counter++;

            }
    }
    if(counter > 0)
    {
      float moyen = (float)somme/counter;
        printf("la moyen general de cette departement est :%.2f\n",moyen);
    }else
    {
    printf("aucun departement trouver!\n");
    }

}
void    statique()
{
    float note = 0;
    char departement_jdida[MAX];
    int counter = 0;

     printf("la nombre total des etudiant :%d\n",count);
     printf("entrer la departement");
     scanf("%s",departement_jdida);
    for(int i = 0 ; i < count ; i++)
    {
        if(strcasecmp(departement_jdida,e1[i].departement) == 0)
           {
               counter++;
}

           }
            printf("le nombre des etudiant sur %s departement est :%d\n",departement_jdida,counter);

            printf("entrer le seuil :");
            scanf("%f",&note);
            printf("les etudiants ayant une moyenne generale superieure a un certain seuil %f\n:",note);
            for(int i = 0;i < count ; i++)
            {
                if(e1[i].note >= note)
                {
                   printf("Nom :%s\n",e1[i].nom);
                    printf("prenom :%s\n",e1[i].prenom);
                   printf("nom de departement :%s_n",e1[i].departement);
                   printf("%f\n",e1[i].note);
            }
}
}


    void    recherche()
    {
        char nom_jdida[MAX];
        char departement_jdida[MAX];
        printf("entrer le nom :");
        scanf("%s",nom_jdida);
        for(int i = 0;i < count ; i++)
        {
            if(strcasecmp(nom_jdida,e1[i].nom)== 0)
            {
                printf("voici les informations de ce etudiant!\n");
                printf("le numero de ce etudiant :%d\n",e1[i].numero);
                printf("le nom de ce etudiant : %s\n",e1[i].nom);
                printf("le prenom de ce etudiant :%s\n",e1[i].prenom);
                printf("La Date de naissance de ce etudiant :\n");
                printf("Date :%d\n",e1[i].d.jour);
                printf("mois :%d\n",e1[i].d.mois);
                printf("annee :%d\n",e1[i].d.annee);
                printf("la departement de ce etudiant :%s\n",e1[i].departement);
                printf("la note general de ce etudiant est :%f\n",e1[i].note);

            }
            printf("ce etudiant pas existe!\n");
        }

        printf("entrer la departement");
        scanf("%s",departement_jdida);
        for(int i = 0;i < count ; i++)
        {
            if(strcasecmp(departement_jdida,e1[i].departement)==0)
            {
                printf("les etudiant de cette departement :\n le nom :%s\n le prenom:%s\n le nom de departement :%s\n la note de ce etudiant :%f\n",e1[i].nom,e1[i].prenom,e1[i].departement,e1[i].note);
            }

        }


    }




















int main()
{
    int choix;
    do
     {

  printf("******************************************\n");
    printf("*        GESTION DES ETUDIANTS           *\n");
    printf("******************************************\n");
    printf("* 1. Ajouter un etudiant                 *\n");
    printf("* 2. Modifier un etudiant                *\n");
    printf("* 3. Afficher un etudiant                *\n");
    printf("* 4. Supprimer un etudiant               *\n");
    printf("* 5. Moyenne generale                    *\n");
    printf("* 6. Statistiques                        *\n");
    printf("* 7. Rechercher                          *\n");
    printf("******************************************\n");
    printf("  Entrer Votre Choix : ");
         scanf("%d",&choix);
             switch(choix)
            {
        case 0 :
       printf("choix incorrect ressayer!!\n");
       break;

        case 1 :
            ajoute();
            count++;
            break;
        case 2 :
            modifier();
            break;

            break;
        case 3 :
              afficher();
              break;
        case 4 :
            supression();
            break;
        case 5 :
            calcule();
            break;
        case 6 :
            statique();
            break;
        case 7 :
            recherche();
            break;

        }
        } while(choix != 0);
}
