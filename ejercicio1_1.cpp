#include <iostream>

int main() { 
    int s,j;
    std::cout << "Ingrese el primer número: ";
    std::cin >> s;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> j; 

    int suma, resta, multiplicacion;
    float division;

    suma = s + j;
    resta = s - j;
    multiplicacion = s * j;
    division = (double)s / j;

    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicación es: " << multiplicacion << std::endl;
    std::cout << "La división es: " << division << std::endl;
    return 0;
} 

 