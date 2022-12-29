#include <iostream>
#include <cstdlib>
#include <ctime>

int generator(){ //generowanie liczby pseudolosowej
    int a = (std::rand() % 7 ) + 4;
    return a;
}
void WriteOut(int t[], int number){ //zapisanie wygenerowanej liczby do komórki tablicy, uzupełnienie jej z wypisaniem jej elementów
    number = 0;
    do {
        int rnumber = generator();
        std::cout << number + 1 << " element tablicy to: " << rnumber << std::endl;
        t[number] = rnumber;
        number++;
    } while (number<999);
}
void Sum(int t[], int number){ //zsumowanie wszystkich el. tablicy i wypisanie sumy
    number = 0;
    int result = 0;
    do {
        result+=t[number];
        number++;
    } while (number<999);
    std::cout << "Suma wszystkich elementow tablicy wynosi: " << result;
}
int main(){
    srand( time (NULL));
    int tab[999];
    WriteOut(tab, 999);
    Sum(tab, 999);
    return 0;
}