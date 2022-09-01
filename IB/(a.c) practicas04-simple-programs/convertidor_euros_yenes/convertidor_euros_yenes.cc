
#include<iostream>

int main() {
    double euros;
    const double yenes {0.0075};

    std::cout <<"Este programa pasa el número de euros introducios a yenes" << std::endl;
    std::cout << " Dime el número de euros para convertir a yenes: "; 
    std::cin >> euros;
    std::cout << euros << " euros corresponden a " << euros / yenes << " yenes" << std::endl;

    return 0; 



}
