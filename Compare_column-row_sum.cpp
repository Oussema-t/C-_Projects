#include <iostream>

using namespace std;

void summenKrit(double** a, int n, int* zeilKrit, int* spaltKrit);

void summenKrit(double** a, int n, int* zeilKrit, int* spaltKrit) {
	
double spaltSum, zeilSum, diagElem;

	for (int i=0; i<n; i++) {
		zeilSum = 0;
		spaltSum  = 0;
		diagElem  = a[i][i];
		
		for (int j=0; j<n; j++) {
			if (i != j) {
				spaltSum  += a[j][i];
				zeilSum += a[i][j];
			}
		}

		if (spaltSum >= diagElem)
			spaltKrit[i] = 0;
		else 
			spaltKrit[i] = 1;
		

		if (zeilSum >= diagElem)
			zeilKrit[i] = 0;
		else 
			zeilKrit[i] = 1;

	}

}
int main()
{
	// Matrix initialisieren
	double matrix[5][5]=      {{5.3, 1.0, 0.0, 0.0, 0.0}, 
                              {2.2, 5.8, 2.1, 0.0, 0.3},
                              {1.2, 3.0, 6.0, 2.0, 1.0},
                              {0.0, 0.0, 2.0, 4.0, 0.0},
                              {1.2, 2.0, 2.2, 3.0, 8.4}};

	// Feld von Zeigern fuer Uebergabe an Funktion initialisieren
	double* a[5] = {matrix[0],matrix[1],matrix[2],matrix[3],matrix[4]};
	// Felder fuer Ergebnisse definieren
	int zeilKrit[5] = {0};
	int spaltKrit[5] = {0};
	// Funktionsaufruf
	summenKrit(a, 5, zeilKrit, spaltKrit);
	// Ausgabe der Ergebnisse auf den Bildschirm
	for (int i=0; i < 5; i++)
	{
		cout << endl << "Diagonalelement " << i+1 << ":" << endl;
		if (zeilKrit[i]==1) cout << "Zeilensummenkriterium ist erfuellt." << endl;
		if (spaltKrit[i]==1) cout << "Spaltensummenkriterium ist erfuellt." << endl;
		if ((zeilKrit[i]==0)&&(spaltKrit[i]==0)) cout << "Keines der Kriterien ist erfuellt." << endl;
	}
	
	return 0;
}
