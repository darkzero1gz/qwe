#include <iostream>
using namespace std;


bool checkprime(int n, int a = 2) {
    if (n == 0 || n == 1 || n == a) {
        return true;
    }

    else if (n % a == 0) {
        return false;
    }

    return checkprime(n, a + 1);
}
int main() {
    int num;
    //system("cls");
    cout << "This Program Check Prime number " << endl;
    cout << "--------------------------------" << endl;
    cout << "Enter number to check prime number: ";
    cin >> num;
    if (checkprime(num)) {
        cout << num << " is Prime" << endl;
    }
    else {
        cout << num << " not Prime " << endl;
    }
}
