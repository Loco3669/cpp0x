#include <iostream>

void CompleteWithNumbers(int t[], int HowMany){
    for(int i = 0; i < HowMany; i++){
        t[i] = (1 + (i * 5));
    }
}

void Write(int t[], int HowMany){
    for(int i = 0; i < HowMany; i++){
       std::cout << i + 1 << " element tablicy: " << t[i] << std::endl;
    }
}

int main(){

    int tab[20];
    CompleteWithNumbers(tab, 20);
    Write(tab, 20);

    return 0;
}