#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

/*void plus_moins(int choix_eleve,int valeur,int nbre){
       int x=0;
       do
       {
           scanf("%d",&choix_eleve);
           if(choix_eleve == valeur)
           {
             printf("bingo \n");
           }
           else if(choix_eleve < valeur)
           {
                   printf("plus \n");
           }
           else//(choix_eleve > valeur)
           {
                 printf("moins \n");
           }
           x++;

       }while(choix_eleve != valeur && x < nbre);
       */
}
/*int main(void)
{
      srand(time(Null));
      int y = rand()%100;
      int x = 0;
      int choix = 0;
      int choix dessai = 0;
      printf("choisir le niveau de difficulte du jeu svp \n");
      printf("le niveau 1 est illimite \n");
      printf("le niveau 2 est moyen et le nombre d'essai est 25 \n");
      print("le niveau 3 est difficile et le nombre d'essai est 10 \n");
      printf("selectionner un niveau entre 1,2 et 3 : ");
      scanf("%d",&choix);
      printf("\n");

      if(choix == 1)
      {
              choix_dessai = 100;
      }
      else if(choix == 2)
      {
              choix_dessai == 25;
      }
      else if(choix_dessai == 3)
      {
              choix_dessai = 10;
      }

      printf("inserer un nombre a trouver svp : \n");
      plus_moins(x,y,choix_dessai);
     
}*/
// void mode_2_eleve(int)
{
void plus_moins_eleve1(int choix_eleve,int valeur,int nbre)
         int x=0;
         int b=0;
         b = nbre
         do
         {
             scanf("%d",&choix_eleve);
             if(choix_eleve == valeur)
             {
                printf("bingo \n");
             }
             else if(choix_eleve < valeur)
             {
                printf("plus \n");
                b = b-1;
             }
             else//(choix_eleve > valeur)
             {
                printf("moins \n");
                b = b -1;
             }
             x++;
         }while(choix_eleve != valeur && x < nbre);
         printf("le resultat est: %d\n",b);
}
void plus_moins_eleve2(int choix_eleve2,int valeur2,int nbre2)
{
     int x=0;
     int b2=0;
     b2=nbre2;
     do
     {
         scanf("%d",&choix_eleve2);
         if(choix_eleve2 == valeur2)
         {
            printf("bingo \n");
         }
         else if(choix_eleve2 < valeur2)
         {
            printf("plus \n");
            b2 = b2-1;
         }
         else//(choix_eleve2 > valeur2)
         {
            printf("moins \n");
            b2 = b2 -1;
         }
         x++;
     }while(choix_eleve2 != valeur2 && x < nbre2);
     printf("le resultat est: %d\n",b2);
}
int main()
{
    int nbre = 0;
    int nbre2 = 0;
    int eleve1 = 0;
    int eleve2 = 0;
    int b, b2;
    srand(time(NULL));
    int a = rand()%100;
    int nbre_tours = 0;
    printf("inserer le nbre de tours svp : ");
    scanf("%d",&nbre_tours);
    for(int i = 0;i < nbre_tours;i++)
    {
        printf("eleve1 inserer le nombre de coups svp : \n");
        scanf("%d",&nbre);
        printf("eleve2 inserer le nombre a deviner : \n");
        plus_moins_eleve1(eleve2,a,nbre);
        printf("eleve2 inserer le nombre de coups svp : \n");
        scanf("%d",&nbre2);
        printf("eleve2 iserer le nombre a deviner : \n");
        plus_moins_eleve2(eleve1,a,nbre2);
    }
    if(b == b2)
    {
         printf("vous etes a egalite : %d %d",b,b2);
    }
    else if(b > b2)
    {
         printf ("eleve1 a gagne : %d %d",b,b2);
    }
    else
    {
         printf("eleve2 a gagne : %d %d",b,b2);
    }
}
