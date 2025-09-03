#include <stdio.h>
int main (){
    int nb,i;
    printf("saisir un nembre entier:\n");
    scanf("%d",&nb);
    for ( i = 1; i <= 10; i++)
    {
       printf("%d X %d = %d \n",nb,i,nb*i);
    }
    








    return 0;
}