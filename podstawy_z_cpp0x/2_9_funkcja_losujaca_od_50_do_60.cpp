#include <iostream>
#include <cstdlib>
#include <ctime>

int losowanie(){
    int a = (std::rand() % 10) + 50; //deklaracja zmiennej, która przechowa wynik wykonanej funkcji rand
    return a; //zwróć wynik
}
int main(){
    srand( time (NULL) );
    
    int start = 20;
   do{
    //SPOSÓB NR 1
    int liczba = losowanie();
    std::cout << liczba << std::endl;
    //SPOSÓB NR 2
    //std::cout << losowanie() << std::endl;
    start--;
   } while (start>10);
    return 0;
}
