# include <iostream>
using namespace std;

int main(void) {
    short int feld[5] = {1,2,3,4,5};
    short int* si_ptr = feld;
    
    cout << "feld       : " <<  feld    << endl;
    cout << "&feld[0]   : " << &feld[0] << endl;
    cout << "&feld[1]   : " << &feld[1] << endl;
    cout << "si_ptr     : " << si_ptr   << endl;
    
    cout << "\nsize of feld     : " << sizeof(feld);
    cout << "\nsize of si_ptr   : " << sizeof(si_ptr);
    cout << "\nsize of &feld[0] : " << sizeof(&feld[0]);
    cout << "\nsize of &feld[1] : " << sizeof(&feld[1]);
    cout << "\n\n";
    
    return 0;
}
