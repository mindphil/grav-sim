#include <iostream>
#include <string>

using namespace std;

// Defining the gravity for any mass

int main()
{
    float g, m, a;
    a = 9.8;

    //input mass
    cout << "Enter a number and press ENTER: ";
    cin >> m;

    //Error if entry is not a number
    if (cin.fail()){
        cout << "Input a number!";
        return 0;
    }
    //Error if entry is less than or equal to zero
    else if (m <= 0){
        cout << "Mass cannot be negative or zero!";
        return 0;
    }
    g = m * a;
    cout << "The Force of gravity is: " << g << "ms^2";
    return 0;
}