#include <iostream>
#include <limits>

// The gravitational force of an object with mass m, on earth

int main()
{
    float g = 0.0f, m = 0.0f, a = 9.8f; //constants and initial value
    
    std::cout << "Enter a positive number and press ENTER: ";
    std::cin >> m;

    while (std::cin.fail() or m <= 0)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Not valid, try again: ";
        std::cin >> m;
        
    }
    
    g = m * a;
    std::cout << "The Force of gravity is: " << g << "N\n";
    return 0;
}