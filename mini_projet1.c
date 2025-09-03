#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5,reussi=0,echoue=0,global;
    double total=0,moyenne;
    int nom[50];
    printf("saisir votre nom :\n");
    scanf("%s",&nom);
   
 
    int tab[5];
    int min=100;
    int max=0;
    

    
    for (int i = 0; i <5; i++)
    {
      do
      {
        
     
      
       printf("saisie %d note :\n",i+1);
       scanf("%d",&tab[i]);
      } while (tab[i]>100||tab[i]<0);


       if (tab[i]<min)
       {
        min=tab[i];
       }
       if (tab[i]>max)
       {
       max=tab[i];
       }
       if (tab[i]>=50)
       {
        reussi++;
       }
       else if (tab[i]<50)
       {
        echoue++;
        }
       
       
       
       




       total=total+tab[i];


    }
    moyenne=total/5;

    printf("==============================\n  RAPPORT FINAL\n==============================\n");
    printf(" Nom : %s\n",nom);
    printf("notes saisies\n");

    for (int j = 0; j < 5; j++)
    {
       printf("Marieres %d :%d \n",j+1,tab[j]);
    }
    printf("Total de notes :%.2lf\n",total);
    printf("Moyenne    :%.2lf\n",moyenne);
    printf("Note la plus haute :%d\n",max);
    printf("note la plus basse :%d\n",min);
    printf("Nombre de matières réussie :%d\n",reussi);
    printf("Nombre de matières échouées :%d\n",echoue);
    if (moyenne<50)
    {
      printf("Mention obtenue : F \n");
    }else if (moyenne>=50&&moyenne<70)
    {
      printf("Mention obtenue : D \n");
    }else if (moyenne>=70&&moyenne<90)
    {
       printf("Mention obtenue : B \n");
    }
    
    
    
    











    if (moyenne>=50&&echoue<=2)
    {
      printf("✅ Résultat final : RÉUSSI \n🎉 Félicitations, \ntu as une note parfaite dans au moins une matière !");
    }
    
    
    
    
    









    return 0;
}