#include <iostream>
using namespace std;
void dokjun(); //Define Function

int main() {
    system ("cls");
    cout << "This Program Check Prime number " << endl;
    cout << "--------------------------------" << endl;
    dokjun(); //Call Function 11
}

///This main Function
void dokjun() {
    int n;
    cout << "Enter number to check prime number: ";
    cin >> n;
        //   2 < 2 2+1
    for (int i = 2; i < n; i++)
    {
        if ( n%i == 0)
        {
            cout << n << " Is not Prime Number" << endl;
        }
        else
        {
            cout << n << " Is Prime number" << endl;
        }
        return;
    }
    
    
}
