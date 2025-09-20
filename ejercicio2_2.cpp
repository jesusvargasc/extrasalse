#include <iostream>

int main(){

    int s;
    std::cout << "Ingrese un número entero: ";
    std::cin >> s;

    if (s%2==0 && s>0){
        std::cout << "El número es par y positivo" << std::endl;
    }
    else if (s%2!=0 && s>0){
        std::cout << "El número es impar y positivo" << std::endl;
    }
    else if (s%2==0 && s<0){
        std::cout << "El número es par pero negativo" << std::endl;
    }
    else{
        std::cout << "El número no es ni impar ni positivo" << std::endl;
    }

}