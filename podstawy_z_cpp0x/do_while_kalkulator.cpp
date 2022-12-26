#include <iostream>

int main(){
    float wynik, liczba1;
    short wybor;
    bool aCzyBlad, wCzyBlad, botak;
    botak = true;
    wynik = 0;
    do{
        std::cout << "Obecny wynik to: " << wynik << std::endl;
        do {
            std::cout << "Wprowadz liczbe: ";
            std::cin >> liczba1;
            aCzyBlad = std::cin.fail();
            std::cin.clear();
            std::cin.ignore( 1000, '\n');
        } while (aCzyBlad);
        std::cout << "[1] Dodawanie\n[2] Odejmowanie\n[3] Mnozenie\n[4] Dzielenie\n[5] Rezygnuj\n[6] Wyjdz z programu\n";
        do {
            std::cin >> wybor;
            wCzyBlad = std::cin.fail();
            std::cin.clear();
            std::cin.ignore( 1000, '\n');
        } while (wCzyBlad);
        switch (wybor){
            case 1:
            wynik+=liczba1;
            break;

            case 2:
            wynik-=liczba1;
            break;

            case 3:
            wynik*=liczba1;
            break;

            case 4:
            if(liczba1 != 0)
            wynik/=liczba1;
            else
            return 0;
            break;

            case 5:
            break;

            case 6:
            return 0;
            break;

            default:
            break;
        }
        
    } while(botak);
}