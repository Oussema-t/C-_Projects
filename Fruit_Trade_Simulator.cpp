#include <iostream>
using namespace std; 

// Definition der Klasse Obst
class Obst
{
	private:
        // Definitionen der Klassenattribute
		char name[15];
		float menge;

	public:
        // Methodendeklarationen   
		void set_Name(char*);
		void set_Menge(float);
		char* get_Name();
		float get_Menge();
};

// Deklaration weiterer Funktionen
bool kaufen(Obst*, float);     // Uebergabe eines Objektzeigers (*) der Klasse Obst

                               // Definition der Funktionen des Hauptprogramms
bool kaufen(Obst*sorte, float kaufmenge)
{
	float bestand = sorte->get_Menge(); // sorte ist Objektzeiger, deswegen Methodenaufruf ueber "->"
	sorte->set_Menge(bestand + kaufmenge); 
	return true;
}
bool verkaufen(Obst*, float&); // Uebergabe eines Objektzeigers (*) der Klasse Obst sowie einer Referenz (&)
bool verkaufen(Obst* sorte, float& verkaufmenge) 
{
	float bestand = sorte->get_Menge();
	if (bestand >= verkaufmenge)
	{
		sorte->set_Menge(bestand - verkaufmenge);
		return true;
	}
	else
	{
		sorte->set_Menge(0.0);
		verkaufmenge = bestand; // verkaufsmenge ist eine Referenz (siehe Parameterliste) auf menge im Hauptprogramm --> menge kann innerhalb der Funktion geaendert werden
		return false;
	}
}
// Hauptprogramm
int main() {
     // Variableninitialisierungen
	bool alles_ok = false;
	int auswahl = 0;
	float menge = 0.0;
	float anfangsmenge = 0.0;
	
	// Objektinstanziierungen
	Obst aepfel;                        // 1. Objektinstanziierung 
	cout << "Aepfel:" << endl;
	cout << "Anfangsmenge eingeben: ";
	cin >> anfangsmenge;                // Einlesen der Anfangsmenge
	aepfel.set_Name("Aepfel");          // Methodenaufruf
	aepfel.set_Menge(anfangsmenge);
	
	Obst birnen;                        // 2. Objektinstanziierung 
	cout << "Birnen:" << endl;
	cout << "Anfangsmenge eingeben: ";
	cin >> anfangsmenge;
	birnen.set_Name("Birnen");
	birnen.set_Menge(anfangsmenge);
	
	// Anfangsbestand auf den Bildschirm ausgeben
	cout << endl << "Sie haben:" << endl;
	cout << aepfel.get_Menge() << " " << aepfel.get_Name() << endl;
	cout << birnen.get_Menge() << " " << birnen.get_Name() << endl;
	
	// Eingabe abfragen und einlesen --> fussgesteuerte do-while Schleife
	do {
		cout << endl << "Bitte geben Sie ein, was sie tun wollen: " << endl;
		cout << "(1) Aepfel kaufen" << endl;
		cout << "(2) Aepfel verkaufen" << endl;
		cout << "(3) Birnen kaufen" << endl;
		cout << "(4) Birnen verkaufen" << endl;
		cout << "Auswahl: ";
		cin >> auswahl;
	}
	while ((auswahl < 1)||(auswahl > 4)); // Eingabepruefung: falls auswahl kleiner 1 oder groesser 4 --> Eingabeabfrage wiederholen
	
	// Menge abfragen und einlesen --> fussgesteuerte do-while Schleife
    do {
		cout << "Menge: ";
		cin >> menge;
	}
	while (menge <= 0.0); // Eingabepruefung
	
	// Ausfuehren des Benutzerbefehls ueber switch-Konstrukt
	switch (auswahl) {
		case 1:
			alles_ok = kaufen(&aepfel, menge); // Uebergabe der Objektadresse (&aepfel), ebenso in case 2-4
			break; 
		case 2:
			alles_ok = verkaufen(&aepfel, menge);
			break;
		case 3:
			alles_ok = kaufen(&birnen, menge);
			break;
		case 4:
			alles_ok = verkaufen(&birnen, menge);
			break;
	}

	// Ausgabe der tatsaechlich gehandelten Menge, falls sie nicht der eingegebenen Menge entspricht
    // d.h. menge wurde innerhalb der Funktion verkaufen geaendert, da an die Funktion verkaufen eine Referenz auf 
    // menge uebergeben wird (siehe Funktionsdeklaration und Funktionsdefinition)
	if (alles_ok == false) {
		cout << endl << "Tatsaechlich gehandelte Menge: " << menge << endl;
	}
		
	// Ausgabe des Endzustandes
	cout << endl << "Sie haben jetzt:" << endl;
	cout << aepfel.get_Menge() << " " << aepfel.get_Name() << endl;
	cout << birnen.get_Menge() << " " << birnen.get_Name() << endl;
    
	return 0;
}

// Definition der Methoden der Klasse Obst mit Zugriffen auf die Klassenattribute (name, menge)
void Obst::set_Name(char* name_neu)
{
	for (int i = 0; i<15; i++)
	{
		name[i] = name_neu[i];
	}
}

void Obst::set_Menge(float menge_neu)
{
	menge = menge_neu;
}

char* Obst::get_Name()
{
	return name;
}

float Obst::get_Menge()
{
	return menge;
}
