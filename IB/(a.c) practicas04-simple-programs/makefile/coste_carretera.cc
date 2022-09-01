
#include<iostream>

int main () { 
    const int coste {1624};
    int metros;

    std::cout << "¡Hola! Este programa calcula el precio de tu carretera por metro." << std::endl;
    std::cout << " Dime cuantos metros tiene tu carretera: "<< std::endl;
    std::cin >> metros;
    std::cout << "El coste de tu carretera será " << coste * metros << " euros" << std::endl;
    return 0;

}

