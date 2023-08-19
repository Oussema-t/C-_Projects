#include <iostream>
#include <math.h> 
using  namespace std ; 

int main()
{ float x,y=0,Somme,i; 
cout<<"donne-moi s'il vous plaît le nombre des fois:";
cin>>i;
cout<<"donne-moi s'il vous plaît la Somme de deux Ages:";
cin>>Somme;
x=(-2*i*Somme)/(1-(5*i));
y=3*x-Somme; 
cout<<"l age de la premiere personne_" <<x<< endl;
cout<<"l age de la deuxieme personne_" <<y<< endl; 
return 0;
    
}
