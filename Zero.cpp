
#include <iostream>
using namespace std; 

void printAndSetZero(int* , int );
void printAndSetZero(int *feld, int n)
{
    cout<<"Funktionsaufruf mit feld = "<<feld<<endl;
	for (int i=0; i<n; i++)
	{
	cout << feld[i]<< endl ;             // Aendern des Inhalts
	}
	cout<< "Nach  der  Functionsaufruf "<< endl ; 
	for (int i=0 ; i<n; i++) { 
	    feld[i]=0;
	    cout<<feld[i]<<endl; }
}


int main()
{
	int liste[5] = {1,2,3,4,5};

    cout << "Wert von liste = "<<liste<<endl<<endl;
   
    //Funktionsaufruf:
    	
 printAndSetZero(liste, 5);
	
	
	
		

	return 0;
}
