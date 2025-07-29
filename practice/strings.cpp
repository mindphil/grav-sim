#include <iostream>
#include <string>

using namespace std;

int main(){
    string mystring;
    mystring = "So, 'string' is the type definition. 'mystring' can now be initialized.";
    string mystring2("Does this work");
    cout << mystring << endl << mystring2 << endl;
    mystring = "Bazinga";
    cout << mystring;
    return 0;
}