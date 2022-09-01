
#include <iostream>

int main() {
    int cent1, cent5, cent20, cent50, euros5, euros10, euros20, euros50;
    int euros100, euros200, euros500; 
 
    std::cout <<"¡Hola!, este programa calcula cuanto dinero tienes, sumando monedas y billetes"
    << std::endl; 
    std::cout <<"¿Cuántas monedas de 1 céntimo tienes? "<<std::endl;
    std::cin >> cent1;

    std::cout <<"¿Cuántas monedas de 5 céntimo tienes? "<<std::endl;
    std::cin >> cent5;

    std::cout <<"¿Cuántas monedas de 20 céntimo tienes? "<<std::endl;
    std::cin >> cent20;

    std::cout <<"¿Cuántas monedas de 50 céntimo tienes? "<<std::endl;
    std::cin >> cent50;

    std::cout <<"¿Cuántos billetes de 5 euros tienes? "<<std::endl; 
    std::cin >> euros5;

    std::cout <<"¿Cuántos billetes de 10 euros tienes?"<<std::endl; 
    std::cin >> euros10;

    std::cout <<"¿Cuántos billetes de 20 euros tienes?"<<std::endl; 
    std::cin >> euros20;

    std::cout <<"¿Cuántos billetes de 50 euros tienes?"<<std::endl; 
    std::cin >> euros50;

    std::cout <<"¿Cuántos billetes de 100 euros tienes?"<<std::endl; 
    std::cin >> euros100; 

    std::cout <<"¿Cuántos billetes de 200 euros tienes?"<<std::endl; 
    std::cin >> euros200;

    std::cout <<"¿Cuántos billetes de 500 euros tienes?"<<std::endl; 
    std::cin >> euros500; 

    int centimos_totales;
    int euros_totales;

    centimos_totales = cent1 + (cent5 * 5) + (cent20 * 20) + (cent50 * 50);
    euros_totales = (euros5 * 5) + (euros10  * 10) + (euros20 * 20) + (euros50 * 50) + (euros100 * 100) + (euros200 * 200) + (euros500 * 500);

    std::cout <<"La cantidad total de euros que tienes es: "
    << (centimos_totales * 0.01) + euros_totales << " euros"<< std::endl;
    return 0; 

}
