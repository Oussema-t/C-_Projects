#include <iostream>
#include <math.h> 
using namespace std ; 

int main()
{ int n ,a,d=2,b,c, s,ab1=1, ab2=1 ; 

cout<< " n"<<endl ; 
cin>> n ; 
cout <<"s"<< endl; 
cin>>  s ; 
for (int i=0; i<n ; i++ ){ 
    ab1*= (n-i);
     ab2=s*ab1;

cout << ab2<< endl;
}
  cout<< "rest -----"<<endl ; 
  cin >>a ;
  cin >> b; 
  c=a%b;  
  cout<< "ccc :"<< c<< endl ; 
  cout<< "##"<< (d+=a%b )<< endl  ; 
 
return 0 ; 
}

