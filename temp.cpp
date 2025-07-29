#include <iostream>

// Newton's law of universal gravitation

int main()
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