#include <stdio.h>
int main (){
int base,expo,i,pow;
printf("calculateur de puissance.\n");
printf("saisir le nombre :\n ");
scanf("%d",&base);
printf("saisir l'esposant:\n");
scanf("%d",&expo);
if (expo<0)
{
    printf("erreur vous avez saisir un exposant negatif.\n");
    return 1;
}
pow=1;
for ( i = 1; i <= expo; i++)
{
    pow=pow*base;
}
if (expo==0)
{pow=1;
}


printf("la puissance de %d a la base %d est :%d",base,expo,pow);







    return 0;
}