#include <iostream>
#include <string>

int main(){

    std::string a, b;
    for (int i = 0; i < 10; i++){
        std::cout << "Wprowadz slowo: ";
        std::cin >> a;
        a += ", ";
        std::cout << std::endl;
        b += a;
    }
    std::cout << b;
    return 0;
}