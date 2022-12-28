#include <iostream>
#include <cstdio>
#include <ctime>

int main(){
    srand (time (NULL));
    int liczba = ( std::rand() % 1000) + 1;
    int ilerazy = 1;
    int strzal;
    bool czyblad;
    do {
        do {
            std::cout << "Proba nr " << ilerazy << ". Podaj liczbe: ";
            std::cin >> strzal;
            czyblad = std::cin.fail();
            std::cin.clear();
            std::cin.ignore( 1000, '\n' );
        } while (czyblad);
        if (strzal == liczba)
        std::cout << "Brawo! Udalo ci sie odgadnac za " << ilerazy << " proba!";
        if(strzal < liczba){
            std::cout << "Szukana liczba ma wieksza wartosc. Sproboj ponownie.\n";
            ilerazy++;
        }
        if(strzal > liczba){
            std::cout << "Szukana liczba ma mniejsza wartosc. Sproboj ponownie.\n";
            ilerazy++;
        }
    } while (strzal != liczba );
    return 0;
}