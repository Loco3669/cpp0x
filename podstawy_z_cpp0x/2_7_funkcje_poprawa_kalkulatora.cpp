#include <iostream>
void moja_funkcja()
{
    std::cout << "[1] - dodawanie" << std::endl;
    std::cout << "[2] - odejmowanie" << std::endl;
    std::cout << "[0] - wyjscie z programu" << std::endl;
}

void dodawanie()
{
    float number1, number2;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> number1;
    std::cout << std::endl;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> number2;
    std::cout << std::endl;
    std::cout << "Wynik dodawania: " << number1 + number2 << std::endl;
}

void odejmowanie()
{
    float number1, number2;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> number1;
    std::cout << std::endl;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> number2;
    std::cout << std::endl;
    std::cout << "Wynik odejmowania: " << number1 - number2 << std::endl;
}

int main()
{
    std::cout << "W programie sa dostepne nastepujace opcje:" << std::endl;
    moja_funkcja();
    std::cout << "Zycze przyjemnego korzystania z programu" << std::endl << std::endl;
    int liczba;
    do
    {
        moja_funkcja();
        std::cin >> liczba;
        switch( liczba )
        {
        case 1:
            dodawanie();
            break;
        case 2:
            odejmowanie();
            break;
            default:
            break;
        } //switch
    } while( liczba != 0 );
   
    return 0;
}