#include <iostream>
using namespace std;

int drittePotenz (float basis);
int drittePotenz (float basis)        // Funktionsdefinition
{	int ergebnis = 0;				// lokale Variable ergebnis
	ergebnis = basis * basis * basis;
return ergebnis;  // Rückgabe der Variablen ergebnis ans Hauptprogramm
}// Funktionsdeklaration
int pow (int basis, int exponent); 	// Funktionsdeklaration
int pow (int basis, int exponent)   // Funktionsdefinition
{	int ergebnis=1;	 		        // lokale Variable ergebnis
	for (int i = 0; i < exponent; i++) { ergebnis *= basis;}
	return ergebnis;
}
int main()
{
    
    // Funktionsaufruf drittePotenz
 	
 	 
  cout<<drittePotenz(4)<<endl; 
  cout<<pow(4,3)<<endl; 
 	return 0; 
 	
    
    // Funktionsaufruf pow

}

