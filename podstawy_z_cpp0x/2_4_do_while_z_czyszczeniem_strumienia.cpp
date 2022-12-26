#include <iostream>

int main(){

    float liczba;
    bool czyblad;
    do{
        std::cout << "Wpisz liczbe: ";
        std::cin >> liczba;
        czyblad = std::cin.fail();
        std::cin.clear();
        std::cin.ignore( 1000, '\n');
        
    }while( czyblad );
    std::cout << "Wpisana liczba to : " << liczba;
    return 0;
}