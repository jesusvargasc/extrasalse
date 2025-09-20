#include <iostream>

void funcion(){
    int s;
    std::cout << "Ingrese un número entero: ";
    std::cin >> s;
    std::cout << "El número que pertenece a la funcion es: " << s << std::endl;
}

int main() { 
   funcion();
   std::cout << "Fuera de la funcion" << std::endl;
   std::cout << "El numero que pertenece al pograma es: No existe" << std::endl;
   return 0;
}