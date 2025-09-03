#include <stdio.h>

int main(){
    /*
    int i ,nb,somm=0;
     printf("saisir un nembre entier positif :\n");
    scanf("%d",&nb);
    for ( i = 0; i <= nb; i++)
    {
        somm=somm+i;
    }
    printf("la domme des n premiers nombres naturels est :%d",somm);*/
    // directe 
    // somme = n * (n + 1) / 2;
    //with while looop
    int somme =0,i=1,nb;
    printf("saisir un nembre entier positif :\n");
    scanf("%d",&nb);
    while (i<nb)
    {
        somme=somme+i;
    }
    









    return 0;

}