#include <stdio.h>
int main (){
    int Fa,Fb,Fc,i=1,nb;
    printf("sisir un nombre entier:\n");
    scanf("%d",&nb);
    Fa=0;
    Fb=1;
     printf("%d ,%d ,",Fa,Fb);
    do
    
    {
      
        Fc=Fa+Fb;
        printf("%d ,",Fc);
        Fa=Fb;
        Fb=Fc;
        i++;

        
        
    }while (nb>=i);
    
    









    return 0;
}