#include <stdio.h>
int main(){
    int nb,x1,x2,x3,x4;
    int inverse;
    
    printf("saisir un nombre entier a quatre chiffres ");
    scanf("%d",&nb);

     x1=(nb%10);
     x2=(nb%100)/10;
     x3=(nb%1000)/100;
     x4=(nb%10000)/1000;
     /*
    printf("%d\n",x1);
    printf("%d\n",x2);
    printf("%d\n",x3);
    printf("%d\n",x4);
*/



    printf("\n%d %d %d %d",x1,x2,x3,x4);












    return 0;
}