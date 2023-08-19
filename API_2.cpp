#include <iostream>
#include <math.h> 
using  namespace std ; 

int main()
{ float temperatur= 2, hoehe=5000  ; 
   float w ,d ,ri, l, a ,BTemp, P, Rho,th, z = 5000, Sauerstoffmasse1,Sauerstoffmasse2, Sauerstoffhinzugefuegt, V, g = 9.81,P1; 
 //Oussama
     cout<<"Geben Sie bitte die Waermeleitfaehigkeit der Wandkabine ein  ";
    cin>>w;   
     cout<<"Geben Sie bitte die Durchmesserverhaeltnis der Kabine ein  ";
    cin>> d;  
     cout<<"Geben Sie bitte die  Laenge in Meter der Kabine ein ";
    cin>>l;  
    
    a=((w*2*3.141592*l)*(295.15))/log(d) ;// Oussama
    
    cout<<"die  abgegebene  Waerme in der  Flugzeugkabine ist :  "<< a <<"watt" << endl ;
    //Marcel 
    cout << "Bitte geben Sie die Bodentemperatur in Kelvin  ein:" <<endl;

    cin >> BTemp;


    P = 100000 * exp(-z * (7 * g)/(2 * 1006 * BTemp));
    
    cout << "Der Druck beträgt: " << P <<" N/m^2" << endl;
    th=BTemp - (6.5*0.001 *hoehe ) ; 
    cout<< "Die  Temperatur  ueber  einer  bestimmten Hoehe:"<< th <<"K"<< endl; 
    
    Rho = P/(287.053 * th );

    cout << " Bevor die Regelung eintritt,betraegt die Dichte: "<< Rho*10e6 << "  kg/m^3" << endl;
    cout<< "Geben Sie bitte die Inneenradius in Meter  der Kabine  ein"<< endl ; 
    cin >> ri ; 

     V=3.141592*(ri*ri)*l; 

    Sauerstoffmasse2 = Rho * V;

    cout << "Die momentane Sauerstoffmasse ,die  uber  bestimmter Hoehe liegt ,  beträgt: " << Sauerstoffmasse2 << " kg" << endl; 
    

    

    Sauerstoffmasse1 = (V * 100000)/(287.053 * BTemp);

    
     Sauerstoffhinzugefuegt = Sauerstoffmasse1 - Sauerstoffmasse2;

    cout <<  Sauerstoffhinzugefuegt << " kg muss  hinzugefügt werden." << endl;

 return 0;  
  }


