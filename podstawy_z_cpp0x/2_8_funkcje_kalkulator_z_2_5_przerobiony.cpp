#include <iostream>

float wczytajliczbe1(){
    float a;
    bool aCzyBlad;
    do {
            std::cout << "Wprowadz liczbe nr1: ";
            std::cin >> a;
            aCzyBlad = std::cin.fail();
            std::cin.clear();
            std::cin.ignore( 1000, '\n');
        } while (aCzyBlad);
        return a;
}
float wczytajliczbe2(){
    float b;
    bool bCzyBlad;
    do {
            std::cout << "Wprowadz liczbe nr2: ";
            std::cin >> b;
            bCzyBlad = std::cin.fail();
            std::cin.clear();
            std::cin.ignore( 1000, '\n');
        } while (bCzyBlad);
        return b;
}

int main(){
    float wynik;
    short wybor;
    bool wCzyBlad, botak;
    botak = true;
    wynik = 0;
    do{
        std::cout << "Wynik dzialania to: " << wynik << std::endl;
        float liczba1 = wczytajliczbe1();
        float liczba2 = wczytajliczbe2();
        std::cout << "[1] Dodawanie\n[2] Odejmowanie\n[3] Mnozenie\n[4] Dzielenie\n[5] Rezygnuj\n[6] Wyjdz z programu\n";
        do {
            std::cin >> wybor;
            wCzyBlad = std::cin.fail();
            std::cin.clear();
            std::cin.ignore( 1000, '\n');
        } while (wCzyBlad);
        switch (wybor){
            case 1:
            wynik = (liczba1 + liczba2);
            break;

            case 2:
            wynik = (liczba1 - liczba2);
            break;

            case 3:
            wynik = (liczba1 * liczba2);
            break;

            case 4:
            if(liczba2 != 0)
            wynik = (liczba1 / liczba2);
            else
            wybor = 6;
            std::cout << "Nie mozna dzielic przez 0! Koniec programu.";
            break;

            case 5:
            break;

            default:
            break;
        }
        
    } while(wybor != 6);
}