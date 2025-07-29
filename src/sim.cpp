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

// Newton's law of universal gravitation

int ug()
{
    float G =  6.67e-11;  // Gravitational constant in Nm2/kg^2
    float F = 0.0f, m1 = 0.0f, m2 = 0.0f, r = 0.0f;
    F = (G * ((m1 * m2)/(r * r)));  // F = G((m1 * m2)/r^2)

    // two planets
    m1 = 5.972e24;
    m2 = 7.35e22;
    r = 385,000/2; //distance between them/2
    std::cout << F;
    return 0;
}