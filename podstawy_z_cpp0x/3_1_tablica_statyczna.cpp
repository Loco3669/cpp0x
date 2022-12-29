#include <iostream>
#include <cstdlib>
#include <ctime>

int generator(){
    int a = (std::rand() % 7 ) + 4;
    return a;
}/*
int SumALL(){

}
int WriteOut(){

}*/
int main(){

    int tab[999];
    int i = 0;
    int result = 0;
    do {
        std::cout << i + 1 << " element tablicy: " << generator() << std::endl; //tablica startuje od 0, nie od 1!
        tab[i] = generator();//wpisanie wygenerowanej wartosci od miejsca 0 do 998
        i++;
    } while (i<999);
    do {
        result += tab[i]; 
        i++;
    } while (i<999);
    std::cout << "Suma wszystkich elementow tablicy wynosi: " << result;
    return 0;
}