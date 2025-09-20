#include <iostream>

int main() {
    int j,s;
    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> j;
    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> s;

    int area;
    area = j * s;  
    std::cout << "El área del rectángulo es: " << area << std::endl;
    return 0;
}