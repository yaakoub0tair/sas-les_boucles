#include <stdio.h>
int main (){
    int nb,i,fac=1;
    printf("saisir un nembre entier positif :\n");
    scanf("%d",&nb);
    
    
    for ( i = 1; i <= nb; i++)
    {
        fac=fac*i;
    }

     if (nb<0)
    {
       printf("erreur nembre :negatif !!!\n");
    }else if (nb==0)
    {
       fac=1;
    }
    
    printf(" la factorielle de %d est :%d",nb,fac);
    










    return 0;
}