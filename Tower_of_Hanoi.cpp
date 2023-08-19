#include <iostream>

using namespace std; 
void move (int, int, int, int); 
void move (int count, int n1, int n3, int n2)
{cout << count<< endl;
    
    if (count > 0)
    {
        move (count - 1, n1 , n2 , n3); 
        cout<<"Move disk "<< count << " from " << n1 <<" to " << n3 << "."<< endl ; 
        move (count - 1, n2, n3, n1); 
                  

        
    }
}

int main()
{
    cout <<"Tower of  Hanoi" << endl;
int num; 

cout << "Enter the number of disks:" << endl; 
cin>> num; 
cout << endl; 
move(num,1,3,2);
    return 0;
}
