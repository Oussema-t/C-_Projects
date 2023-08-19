#include <iostream>					

using namespace std;
void fkt_eingabe(float**, float *, int);
void fkt_berechnung(float**, float*, float*, int);



int main()
{

float Steifigkeit[3][3] = {0.0}; // Inisialisieren das Feld
float Spannung[3]= {0.0};
float Dehnung[3];
float * Steifigkeitsfeld[3]= {Steifigkeit[0],Steifigkeit[1],Steifigkeit[2]};
// Erstallung von Feld Mit Zeiger
fkt_eingabe(Steifigkeitsfeld,Dehnung,3);
fkt_berechnung(Steifigkeitsfeld,Dehnung,Spannung,3);
cout<<"Die berechnete Spannug lautet:"<< endl;
for(int i=0; i <3 ; i++){
    cout<< "S["<< i+1<<"]="<<Spannung[i]<< endl;}

return 0;
    
}
void fkt_eingabe(float**Steifigkeitsfeld, float *Dehnung, int Dimension){
    
cout<<"Bitte geben Sie die Steifigkeitsmatrix an:"<< endl; 
for(int i=0; i< Dimension; i++){

  for(int j =0; j< Dimension;j++){
    cout<< "E["<< i+1 <<"]"<<"["<< j+1 <<"]"<< endl;
    cin>> Steifigkeitsfeld[i][j]; 
      
  }
    
}

cout<<"Bitte geben Sie Dehnung an:"<<endl; 

for(int d=0;d<Dimension;d++){
 cout<<"D["<< d+1 << "]"<< endl;
    cin>> Dehnung[d]; 
}
    
}
void fkt_berechnung(float**Steifigkeitsfeld, float*Dehnung, float*Spannung, int Dimension){
for(int i=0;i<Dimension;i++){
for(int j=0;j<Dimension;j++){ 
    Spannung[i]+= Steifigkeitsfeld[i][j]* Dehnung[j];
         
     }
    
 }
 
}
