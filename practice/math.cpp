#include <iostream>

using namespace std;

// Initializing integers in one way

int main(){
    
    // Initializing integers in one way

    int a, b, c;
    a = 5, b = 3;
    c = a + b;
    
    // Initializing integers in another way
    
    int d(3), e(2), f(a - b);

    // Initializing integers in a third way

    auto g{10};
    auto h{5};
    decltype (h) i{g / h};
    
    // output result in terminal with cout

    cout << "c: " << c << endl << "f: " << f << endl << "i: " << i << endl;

    // Output result in terminal with printf

    printf ("c: %d\n", c), printf("f: %d\n", f), printf("i: %d\n", i);

    // end program

    return 0;
}