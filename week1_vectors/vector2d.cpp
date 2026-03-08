#include <iostream>
#include "vector2.h"
using namespace std;

int main() {
    std::cin >> a.x >> a.y;
    std::cin >> b.x >> b.y;


    Vector2 c = a.add(a);
    Vector2 d = b.subtract(a);
    Vector2 e = a.multiply(b);

    std::cout << c.x << " " << c.y << std::endl;
    std::cout << d.x << " " << d.y << std::endl;
    std::cout << e.x << " " << e.y << std::endl;

    return 0;
}