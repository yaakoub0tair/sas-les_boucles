#include <stdio.h>
int main(){
    int Compteur=0,nb;
    printf("Compteur de Chiffres.\n");
    printf("saisir un nembre positif:\n");
    scanf("%d",&nb);
    if (nb==0)
    {
        
        printf("le nombre 0 a 1 chiffre .");
    }
    int n=nb;
    while (nb>0)
    {
        Compteur++;
        nb=nb/10;
    }
    printf(" le nombre %d a %d chiffres . ",n,Compteur);
    









    return 0;
}