
#include <iostream>
using namespace std ;  
int  bs(int*array , int  n,  int sv ); 
int  bs(int*array , int  n,  int sv ){ 
    int min = 0 , max = n-1 ; 
    while ( max >= min) { 
        if (array[ (max-min)/2 ]== sv )
        cout << " die gesuchte  wert ist in  Postion :"<< (max-min )/2 << endl ; 
        else 
         if(array[(max-min)/2 ] > sv ) 
         cout<<((max-min)/2) -1<< endl; 
         else 
         cout << ((max-min) /2) -1<< endl ; 
    }
     

int main()
{  
    int*array[5]={1,2,3,4,5,} ; 
int n , sv ; 
cout << " geben  sie n  number "<< endl ; 
cin >> n ; 
cout<< " geben  Sie bitte die gesuchte  wert "<< endl ; 
 cin  >>  sv ; 

 bs( array ,  n ,   sv )
return 0;
}
