#include <iostream>
#include <cstdlib>
#include <ctime>

int wylosuj(int start, int stop){
    int a = (std::rand() % stop) + start; //start to od jakiej liczby ma liczyć, a stop to + ile od startu do końca +1 w pamieci, 
    //czyli jak chcemy mieć od np. 50 do 70, to start 50, a stop 20 + 1 czyli 21
    return a;
}
int main()
{
    srand( time( NULL ) );
    int start;
    std::cin >> start;
    int stop;
    std::cin >> stop;
    int ile = 20;
    do
    {
        std::cout << wylosuj( start, stop ) << std::endl;
        ile--;
    } while( ile > 0 );
   
    return 0;
}