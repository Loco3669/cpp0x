#include <iostream>

int main(){
    float a, b;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    //Poniższej linii nie ma, ponieważ liczb rzeczywistych nie można dzielić przez modulo
    //std::cout << "a % b = " << a % b << std::endl;
}