#include <iostream>					// Präprozessoranweisung

using namespace std;
class Konto{
    
    private: 
    char kontoinhaber[20];
    int kontonummer;
    float kontostand;
    
    public: 
    void Kontoinhaber_setzen(char);
    char Kontoinhaber_ausgeben();
    void Kontonummer_setzen(int);
    int  Kontonummer_ausgeben(int); 
    float Kontostand_ausgeben(float); 
    float Einzhalen(float); 
    folat Abheben(float);

};
//Klasse Definition 

void Konto::Kontoinhaber_setzen(char name){ 
    kontoinhaber [20]= name; 
}
char Konton:: Kontostand_ausgeben(char name){
for (int i=0; i<20: i++){
cout<< "Name der kontoinhaber"<< name[i]; 
}
return name;
}
void Konto::Kontonummer_setzen(int Nummer){
    Kontonummer= Nummer; 
}
int Konto::Kontonummer_ausgeben(int Nummer){
cout<<"Die Kontonummer lautet:"<< endl; 
return Nummer;}

float Konto::Kontostand_ausgeben(float kontostand1){
cout<< "Die Kontostand lautet:"<< endl;
return kontostand1;
}
float Konto::Einzhalen(float ein){
    Kontostand1 += ein;
    cout<< "Das Kontostand nach dem Anuzhalung:"<< endl; 
    return kontostand1;
}

float Konto::Abheben(float ab){
    if(kontostand1< ab){
        cout<<"Das Kontostand nach der Abhebeung:"<< endl; 
     return kontostand -= ab; 
    }
    else {
        cout<<"Die Abhebung ist unmöglich:"<< endl; 
    }
}
// Hauptfunktion
int main()									// Funktionskopf
{
	Konto testkonto;// Objekt 

	// Methoden vom Typ "setze" ansprechen:
	char name [20] = "MusterKunde";
	testkonto.setzeKontoinhaber(name);
	testkonto.setzeKontonummer(123456);

	// Methoden einzahlen und abheben ansprechen
	// (diese Aufrufe auskommentieren, falls die Methoden noch
	//  nicht definiert sind)
	float betrag1 = 5000;
	float betrag2 = 2000;
	testkonto.einzahlen(betrag1);
	testkonto.abheben(betrag2);

	// Methoden com Typ "gib" ansprechen
	// (Diese Methoden haben einen Rueckgabewert!)
	char* inhaber = testkonto.gibKontoinhaber();
	int nummer = testkonto.gibKontonummer();
	float stand = testkonto.gibKontostand();

	// Bildschirmausgabe:
	cout << "Kontoinhaber: " << inhaber << endl;
	cout << "Kontonummer:  " << nummer << endl;
	cout << "Kontostand:   " << stand << endl;
	
	return 0;
}														// Funktionsende
