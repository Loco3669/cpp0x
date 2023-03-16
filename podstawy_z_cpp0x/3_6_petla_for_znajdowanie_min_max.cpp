#include <iostream>
#include <cstdlib>
#include <ctime>

void Random(int t[], int HowMany){
    for(int i = 0; i < HowMany; i++){
        int GenNumb = (std::rand() % 21) + 10;
        t[i] = GenNumb;
    }
}
void FromTheBeginning(int t[], int HowMany){
    for(int i = 0; i < HowMany; i++){
        std::cout << i + 1 << " element tablicy: " << t[i] << std::endl;
    }
}
void FromTheEnding(int t[], int HowMany){
    for(int i = HowMany - 1; i >= 0; i--){
        std::cout << i + 1 << " element tablicy: " << t[i] << std::endl;
    }
}
int FindMin(int t[], int HowMany){
    int number = 40;
    for(int i = 0; i < HowMany - 1; i++){
        if(t[i] <= t[i+1]){
            if(t[i] <= number){
                number = t[i]; //nie moze byc na odwrot, kompilator nie widzi operacji i zwraca 40
            } 
        }
    }
    return number;
}
int FindMax(int t[], int HowMany){
    int number = 0;
    for(int i = 0; i < HowMany - 1; i++){
        if(t[i] >= t[i+1]){
            if(t[i] >= number){
                number = t[i]; //nie moze byc na odwrot, kompilator nie widzi operacji i zwraca 0
            }    
        }
    }
    return number;
}
void WriteMinMax(int a, int b){
    std::cout << "Najmniejsza liczba to: " << a << "\nNajwieksza liczba to: " << b << std::endl;
}
int main(){
    srand(time(NULL));
    int tab[10];
    Random(tab, 10);
    FromTheBeginning(tab, 10);
    FromTheEnding(tab, 10);
    int iMin = FindMin(tab, 10);
    int iMax = FindMax(tab, 10);
    WriteMinMax (iMin, iMax);
    return 0;
}