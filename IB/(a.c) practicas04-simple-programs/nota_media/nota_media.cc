
#include<iostream>

int main() {
    double nota1, nota2, nota3; 

    std::cout <<"Este programa calcula tu nota media"<< std::endl << std::endl << std::endl;
    std::cout <<"Porfavor, introduzca su primera nota: "<< std::endl; 
    std::cin >> nota1;

    std::cout << "Porfavor, introduzca su segunda nota: "<< std::endl; 
    std::cin >> nota2;

    std::cout << "Porfavor, introduzca su tercera nota: "<< std::endl; 
    std::cin >> nota3;

    std::cout << "La media de tus tres notas es: "<< (nota1 + nota2 + nota3) / 3 << std::endl; 
    return 0;
}

