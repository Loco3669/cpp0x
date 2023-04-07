#include <iostream>

int main(){

    long long wynik = 0;
    for ( int a = 1; a <= 44; a++ ){
        for ( int b = a + 1; b <= 45; b++ ){
            for ( int c = b + 1; c <= 46; c++ ){
                for ( int d = c + 1; d <= 47; d++ ){
                    for ( int e = d + 1; e <= 48; e++ ){
                        for ( int f = e + 1; f <= 49; f++ ){
                            wynik++;
                        }
                    }
                }
            }
        }
    }
    std::cout << wynik;
    return 0;

}