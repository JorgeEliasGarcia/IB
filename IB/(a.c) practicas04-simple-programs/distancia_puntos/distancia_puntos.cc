
#include<iostream>
#include<cmath>

int main() {
    int x_1, y_1, z_1;
    int x_2, y_2, z_2;

    std::cout << "¡Hola!, este programa calcula la distancia entre dos puntos en el plano" << std::endl;
    std::cout << "Dame la cordenas x del primer punto: "; 
    std::cin >> x_1;
    std::cout << "Dame la cordenas y del primer punto: "; 
    std::cin >> y_1;
    std::cout << "Dame la cordenas z del primer punto: "; 
    std::cin >> z_1; 
    std::cout << "Ahora vamos con el segundo punto" << std::endl; 
    std::cout << "Dime la cordenada x del segundo punto: ";
    std::cin >> x_2;

    std::cout << "Dime la cordenada y del segundo punto: ";
    std::cin >> y_2;

    std::cout << "Dime la cordenada z del segundo punto: ";
    std::cin >> z_2;

    int dx, dy, dz;

    dx = x_2 - x_1;
    dy = y_2 - y_1;
    dz = z_2 - z_1;

    std::cout << "La distancia entre tus dos puntos es de ";
    std::cout << sqrt (dx + dy + dz) << " metros" << std::endl; 
    return 0;
}
