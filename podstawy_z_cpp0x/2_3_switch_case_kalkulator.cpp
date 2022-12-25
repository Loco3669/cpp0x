#include <iostream>
int main(){
    int numer;
    float liczba_1, liczba_2;
    std::cout << "Wpisz pierwsza liczbe: " << std::endl;
    std::cin >> liczba_1;
    std::cout << "Wpisz druga liczbe: " << std::endl;;
    std::cin >> liczba_2;
    std::cout << "Jakie dzialanie: 1 => +   2 => -   3 => *   4 => /" << std::endl;;
    std::cin >> numer;
    std::cout << std::endl;
    switch (numer){
        case 1:
            std::cout << "Wynik dodawania " << liczba_1 << " + " << liczba_2 << " to: " << liczba_1+liczba_2;
            break;
        case 2:
            std::cout << "Wynik odejmowania " << liczba_1 << " - " << liczba_2 << " to: " << liczba_1-liczba_2;
            break;
        case 3:
            std::cout << "Wynik mnożenia " << liczba_1 << " * " << liczba_2 << " to: " << liczba_1*liczba_2;
            break;
        case 4:
            std::cout << "Wynik dzielenia " << liczba_1 << " / " << liczba_2 << " to: " << liczba_1/liczba_2;
            break;
        default:
            std::cout << "Bledny numer dzialania. Sproboj jeszcze raz";
            break;
    }
    return 0;
}