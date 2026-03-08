#include <iostream>
#include <cassert>
#include "vector2.h"
using namespace std;

int main() {
    Vector2 a(0, 0);
    Vector2 b(0, 0);

    cin >> a.x >> a.y;  //Get the input for the vector a 
    cin >> b.x >> b.y;  //Get the input for the vector b

    Vector2 c = a.add(a);      //Add the vector a to itself 
    Vector2 d = b.subtract(a); //Subtract vector from b to a
    Vector2 e = a.multiply(b); //Multiply the vector a with vector b
    double f = a.dot(b);       //Calculate the dot product of vector a and vector b 
    double g = a.magnitude();  //Calculate the magnitude of vector a

    std::cout << c.x << " " << c.y << std::endl;
    std::cout << e.x << " " << e.y << std::endl;
    std::cout << f << endl;
    std::cout << g << endl;

    assert(a.magnitude() == 5); // Check if the magnitude of vector v is 5
    
    return 0;
}