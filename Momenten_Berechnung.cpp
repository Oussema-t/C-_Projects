#include<iostream> 
using namespace std ; 
void mom(double k[3],double L, double m[3]); 
void mom(double k[3],double L , double m[3]) { 
 m[0]=0; 
 m[1]= k[2]* L ; 
 m[2]= k[1]* L ;
 cout<<"Die Resultierende Moment:( "<<m[0]<<","<<m[1]<<","<<m[2]<<","<< ") T" << endl; 
} 
int main () { 
 double  L ;  
 double  kraft [3]; 
 double  moment[3]; 
 cout<< "Geben Sie bitte die Laenge  l in m:  "; 
 cin >> L; 
 for(int i=0 ;i<3; i++ ){ 
     cout<< "Geben  Sie bitte die Kraftkomponente "<< i+1 << endl ; 
     cin>>kraft [i] ; 
 }
     mom(kraft , L, moment) ; 
     return 0 ; 
}
     
