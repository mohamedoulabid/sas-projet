
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct
{
    int jour ;
    int mois;
    int annee;
} naissance;
typedef struct
{
    int numero_unique;
    char nom [50];
    char prenom[50];
    naissance date_de_naissance;
    char departement[70];
    float note_generale;
} etudient;

etudient p[100];
int i;

int supp;
int contore=0;// number total
int i=0;
int j;
int etudient_total;

void AjouterEtudient()
{

    printf("ajouter le nom d'etudient : \n");
    scanf("%s",p[i].nom);//here you add p[con] bcz this titre inside the table and u need to call him by the fonction also we  have struct that why
    printf("ajouter le prenom d'etudient  : \n");
    scanf("%s",p[i].prenom);
    printf("ajouter la jour de naissance d'etudient :\n");
    scanf("%d",&p[i] .date_de_naissance.jour);
    printf("ajouter la mois de naissance d'etudient :\n");
    scanf("%d",&p[i] .date_de_naissance.mois);
    printf("ajouter annee de naissance d'etudient :\n");
    scanf("%d",&p[i] .date_de_naissance.annee);
    printf("ajouter la departement d'etudient :\n");
    scanf("%s",p[i].departement);
    printf("ajouter la note generale d'etudient:\n");
    scanf("%f",&p[i].note_generale);
    contore++;
    p[i].numero_unique=contore;
    i++;

}
void suppremeetudient()
{

    int cherche;
    int trv=0;
    printf("saisir numero unique de l'etudient a supprime : \n");
    scanf("%d",&cherche);
    for(i=0; i<contore; i++)
    {
        if(p[i].numero_unique==cherche)
        {
            trv=1;
            break;
        }
    }
    if(trv==0)
    {
        printf("numero_unique non trouver \n");
    }
    else
    {
        for(i=0; i<contore; i++)
        {
            p[i]=p[i+1];
            printf("l'etudiant a ete supprime\n");
        }
        contore--;
    }
}
void modifieretudient()// pour changer les information d'une etudient
{

    int cherch;
    printf("saisir numero unique d'etudient:\n  ");
    scanf("%d",&cherch);
    for(i=0; i<contore; i++)
    {
        if(p[i].numero_unique==cherch)
        {
            printf("entrer la nouvelle nom : \n");
            scanf("%s",p[i].nom);
            printf("entrer la nouvelle prenom : \n");
            scanf("%s",p[i].prenom);
            printf("entrer la nouvelle date_de_naissance :\n ");
            scanf("%d",&p[i].date_de_naissance);
            printf("entrer la nouvelle departement :\n ");
            scanf("%s",p[i].departement);
            printf("entrer la nouvelle note generale :\n ");
            scanf("%f",&p[i].note_generale);
            return;
        }
        }
    }
void afficherdetail()
{

    for(i=0; i<contore; i++)
    {
        printf(" le numero unique est :%d\n ",p[i].numero_unique);
        printf("le nom est : %s \n",p[i].nom);
        printf("le prenom est :%s \n",p[i].prenom);
        printf("date de naissance est : %d \n",p[i].date_de_naissance);
        printf("le departement est : %s\n ",p[i].departement);
        printf("la note generale est : %.2f \n",p[i].note_generale);
    }
}
void rechercheetudient()
{

    char find[50];
    printf("entrer le nom qui tu cherche:\n ");
    scanf("%s",find);

    for (i=0; i<contore; i++)
    {
        if(strcmp(p[i].nom,find)==0)
        {
            printf("numero unique : %d nom: %s prenom: %s date de naissance: %d/%d/%d departement: %s note generale: %.2f\n", p[i].numero_unique, p[i].nom, p[i].prenom,    p[i].date_de_naissance.jour, p[i].date_de_naissance.mois, p[i].date_de_naissance.annee, p[i].departement, p[i].note_generale);
            break;
        }
        else
            printf("ce nom n'existe pas \n.");
    }
}
void chercheetudient()
{
    char trouve[50];
    printf("entrer le departement de l'etudient qui tu cherche: \n ");
    scanf("%s",trouve);

    for (i=0; i<contore; i++)
    {
        if(strcmp(p[i].departement,trouve)==0)
        {
            printf("numero unique : %d nom: %s prenom: %s date de naissance: %d/%d/%d departement: %s note generale: %.2f\n", p[i].numero_unique, p[i].nom, p[i].prenom,    p[i].date_de_naissance.jour, p[i].date_de_naissance.mois, p[i].date_de_naissance.annee, p[i].departement, p[i].note_generale);

        }
        else
            printf("ce  departement n'existe pas \n.");
    }
}

void calculermoyenne()
{
    char trouve[50];
    float moyenne_dep=0;
    float moyenneeco = 0;
    float somme_dep=0;
    int  counteco=0;
    int count_dep=0;
    float sommeeco=0;
    printf("entrer le departement de l'etudient qui tu cherche: \n ");
    scanf("%s",trouve);

    for (i=0; i<contore; i++)
    {
        if(strcmp(p[i].departement,trouve)==0)
        {
            somme_dep=somme_dep + p[i].note_generale;
            count_dep++;

        }
        sommeeco=sommeeco+p[i].note_generale;
        counteco++;
    }
    if(count_dep> 0)
    {
        moyenne_dep= somme_dep /count_dep;//plus dep

        printf("la moyennen de departement '%s' est egal a : %.2f\n",trouve,moyenne_dep);


    }
    else
    {
        printf("ce  departement '%s' n'existe pas \n.");
    }
    if(counteco > 0)
    {
        moyenneeco= sommeeco /counteco;// plus eco

        printf("la moyenne de l'ecole est egal a : %.2f\n",moyenneeco);


    }
    else
    {
        printf("aucun. \n");
    }
}

void nombretotal()
{

    printf("la nombre total est egal :%d\n ",contore);
}
void chaqueepartement(){
int count_dep=0;
char trouve [20];


    printf("entrer le departement de l'etudient qui tu cherche: \n ");
    scanf("%s",trouve);

    for (i=0; i<contore; i++)
    {
        if(strcmp(p[i].departement,trouve)==0)
        {
            count_dep++;

        }
}
printf("le nombre total de departement '%s' est : %d",trouve,count_dep);
}

void moyenneparunseuil()
{

    float seuil;
    printf("saisir le seuil :");
    scanf("%f",&seuil);
    for (i = 0; i < contore; i++)
    {
        if (p[i].note_generale>=seuil)
        {
            printf("le nombre unique :%d \n ",p[i].numero_unique);
            printf("le nom :%s \n ",p[i].nom);
            printf("le prenom :%s \n ",p[i].prenom);
            printf("date de naissane :%d  \n ",p[i].date_de_naissance);
            printf("le departement :%s \n ",p[i].departement);
            printf("le note generale :%2.f \n ",p[i].note_generale);

        }
        else
        {
            printf("aucun etudient succes .\n ");
        }
    }
}


void meilleuuresnotes()
{
    int i,j;
    etudient temp;
    for ( i =0 ; i< contore -1; i++ )
    {

        for ( j=i; j< contore ; j++)
        {
            if(p[i].note_generale < p [j].note_generale)
            {
                temp=p[i];
                p[i]= p[j];
                p[j]=temp;
            }
        }
    }
    printf("les 3 etudient ayant les meilleur notes sont :\n");
    for ( i=0 ; i<3 ; i++)
    {
        printf("-------------<etudient %d>----------------\n", p[i].numero_unique);
        printf("prenom:                    %s\n,",p[i].prenom);
        printf("note generale:                    %2.f\n,",p[i].note_generale);
        printf("date de naissance:                    %d %d %d\n", p[i].date_de_naissance.jour, p[i].date_de_naissance.mois, p[i].date_de_naissance.annee);
        printf("departement:                    %s\n,",p[i].departement);
    }
}


void reussidepartement()
{
    char departements[100][50];                         // tableau pour stocker les noms des départements
    int nombres_reussite[100] = {0};                     // tableau pour stocker les comptes d'étudiants ayant reussi dans chaque département
    int nb_departements = 0;

                                                         // remplir les departements et compter les reussit
    for (int i = 0; i < contore; i++) {
        if (p[i].note_generale >= 10)
            {           // on considere comme reussi si la note est >= 10
            int j;
            for (j = 0; j < nb_departements; j++) {
                if (strcmp(departements[j], p[i].departement) == 0) {
                    nombres_reussite[j]++;
                    break;
                }
            }
            if (j == nb_departements) {
                strcpy(departements[nb_departements], p[i].departement);
                nombres_reussite[nb_departements] = 1;
                nb_departements++;
            }
        }
}

    printf("Nombre d'etudiants ayant reussi dans chaque departement :\n");
    for (int i = 0; i < nb_departements; i++) {
        printf("Departement %s : %d etudiant(s) ayant reussi\n", departements[i], nombres_reussite[i]);
    }

}


int main(){
    int choix;
    int possibilite;
    do
    {
        printf("---------------------------------------------------------\n");
        printf("1-ajouter un etudient : \n");
        printf("2-modifier un etudient :\n");
        printf("3-supprimer un etudient: \n");
        printf("4-afficher les details de etudient: \n");
        printf("5-calculer la moyenne generale:\n");
        printf("6-recherche un  etudient par departement: \n");
        printf("7-recherche un etudient par nom  : \n");
        printf("8-statistique : \n");
        printf("9-sortiiir. \n");

        printf("saisir votre choix: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            printf("---------------------------------------------------------\n");
            AjouterEtudient();
            break;
        case 2:
            printf("---------------------------------------------------------\n");
            modifieretudient();
            printf("---------------------------------------------------------\n");

            break;
        case 3 :
            printf("---------------------------------------------------------\n");
            suppremeetudient();
            printf("---------------------------------------------------------\n");
            break;
        case 4 :
            printf("---------------------------------------------------------\n");
            afficherdetail();
            printf("---------------------------------------------------------\n");
            break;

        case 5:
            printf("---------------------------------------------------------\n");
            calculermoyenne();
            printf("---------------------------------------------------------\n");
            break;

        case 6:
            printf("---------------------------------------------------------\n");
            chercheetudient();
            printf("---------------------------------------------------------\n");
            break;

        case 7:
            printf("---------------------------------------------------------\n");
            rechercheetudient();
            printf("---------------------------------------------------------\n");
            break;

        case 8:
            do
            {
                printf("---------------------------------------------------------\n");
                printf("1-afficher le nombre total d'etudient  : \n");
                printf("2-afficher le nombre d'etudient de chaque departement :\n");
                printf("3-afficher les etudient ayant une moyen generale superieur a certain seuil: \n");
                printf("4-afficher les 3 etudient ayant le mieilleurs notes: \n");
                printf("5-afficher le nombre d'etudient ayant reussi dans chaque departement :\n");
                printf("6-sortir .\n");

                printf("saisir votre possibilite : \n");
                scanf("%d",&possibilite);
                switch (possibilite)
                {
                    printf("---------------------------------------------------------\n");
                case 1:
                    printf("---------------------------------------------------------\n");
                    nombretotal();
                    printf("---------------------------------------------------------\n");
                    break;
                case 2:
                    printf("---------------------------------------------------------\n");
                    chaqueepartement();
                    printf("---------------------------------------------------------\n");
                    break;
                case 3:
                    printf("---------------------------------------------------------\n");
                    moyenneparunseuil();
                    printf("---------------------------------------------------------\n");
                    break;
                case 4:
                    printf("---------------------------------------------------------\n");
                    meilleuuresnotes();
                    printf("---------------------------------------------------------\n");
                    break;
                case 5:
                    printf("---------------------------------------------------------\n");
                    reussidepartement();
                    printf("---------------------------------------------------------\n");
                    break;
                }
            }
            while(possibilite!=6);
        default:
            printf("---------------------------------------------------------\n");
            printf("Sortie du programme.\n");
            break;
        }

    }
    while(choix!=9);
    return 0;
}

