
#include <iostream>			                        // Praeprozessor-Anweisungen
using namespace std;

class Kreis {
			
		private: 						        // Attributdefinitionen
		double a;
        double b;
		double radius; 
		public:							    // Methodenprototypen
        double gibFlaeche(void);
        void setzeMP(double xMP, double yMP);
        void setzeRadius(double r);
};

// Methodendefinitionen
double Kreis::gibFlaeche(void){				    // Methode gibFlaeche
	return 3.14159*radius*radius;
}
void Kreis::setzeMP(double a, double b){		// Methode setzeMP
	this->a = a;
	this->b = b;
}
void Kreis::setzeRadius(double r){				// Methode setzeRadius
    radius = r;                         // alternativ: this->radius = r;
    cout << "Radius wurde gesetzt auf: " << r << endl;
}

//Hauptprogramm
int main(){   
float r1 , r2 ; 
cout<< "Geben Sie  den  Radius"<<endl ; 
cin>> r1; 
cin>> r2; 
    Kreis kreis1;
    Kreis kreis2;
    
    kreis1.setzeMP(4.0,2.0);
    kreis2.setzeMP(2.0,3.0);
    
    kreis1.setzeRadius(r1);
    kreis2.setzeRadius(r2);
    
    cout << "Flaeche kreis1: " << kreis1.gibFlaeche() << endl;
    cout << "Flaeche kreis2: " << kreis2.gibFlaeche() << endl;

    return 0;
}
