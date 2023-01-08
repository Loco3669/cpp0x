#include <iostream>
#include <cstdlib>
#include <ctime>

int Write(int WhichNumber){
    int a;
    bool error;
    do {
    std::cout << "Wipisz " << WhichNumber + 1 << " liczbe: ";
    std::cin >> a;
    error = std::cin.fail();
    std::cin.clear();
    std::cin.ignore( 1000, '\n' );
    } while (error);
    return a;
}
int random(){
    int GenNumb = (std::rand() % 10 ) + 1;
    return GenNumb;
}
void WriteToTab(int t[], int WhichNumber){
    WhichNumber = 0;
    do {
            int a = Write(WhichNumber);
            t[WhichNumber] = a;
            std::cout << std::endl;
            WhichNumber++;
        }while (WhichNumber < 10);
}
bool repeat(int t[], int numbers, int random){
    if (numbers <= 0)
        return false;
    int i = 0;
    do {
        if (t[i] == random)
            return true;
        else
        i++;
    } while (i < numbers);
    return false;
}
int main(){
    srand ( time (NULL) );
    int tab[10];
    int checktab[10];
    int counter = 0;
    WriteToTab(tab, 10);
    counter = 0;
    
    do {
        int randNumb = random();
        if( repeat(checktab, counter, randNumb) == false){
            checktab[counter] = randNumb;
            std::cout << randNumb << " element tablicy to: " << tab[randNumb - 1] << std::endl;
            counter++;
        }
    } while (counter < 8);
    
    //SPRAWDZENIE POPRAWNOŚCI DZIAŁANIA PROGRAMU
    /*int i=0;
    do{
        std::cout << tab[i] << std::endl;
        std::cout << checktab[i] << std::endl;
        i++;
    }while (i < 8);
    */
   
    return 0;
}


