#include <stdio.h>

int main(){
    int i ,nb,somm=0;
     printf("saisir un nembre entier positif :\n");
    scanf("%d",&nb);
    for ( i = 0; i <= nb; i++)
    {
        somm=somm+i;
    }
    printf("la domme des n premiers nombres naturels est :%d",somm);






    return 0;

}