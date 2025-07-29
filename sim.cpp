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

    g = m * a;
    cout << "The Force of gravity is: " << g << "ms^2";
    return 0;
}