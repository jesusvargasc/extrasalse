#include <iostream>

int main() { 
    double temperatura;
    char unidad;
    std::cout << "Ingrese la temperatura:";
    std::cin >> temperatura;
    std::cout << "Ingrese la unidad de la temperatura (C para Celsius, F para Fahrenheit): ";
    std::cin >> unidad;

    std::cout <<"La temperatura es "<< temperatura << unidad <<"°"<< std::endl;
    return 0;
}