#include <iostream>
#include <limits>
#include <string>


void ReadPearson(std::string &iname, std::string &isurname, int &iage){
    std::cout << "\nWporwadz imie: ";
    std::cin >> iname;
    std::cout << "\nWprowadz nazwisko: ";
    std::cin >> isurname;
        
    bool age_fail;
    do{
        std::cout << "\nWprowadz wiek: ";
        std::cin >> iage;
        age_fail = std::cin.fail();
        std::cin.clear();
        std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
    } while (age_fail);

}

void WritePearson(std::string iname, std::string isurname, int iage){

    std::cout << "Name: " << iname << std::endl;
    std::cout << "Surname: " << isurname << std::endl;
    std::cout << "Age: " << iage << std::endl;

}
int main(){

    std::string name[2];
    std::string surname[2];
    int age[2];

    for (int i = 0; i < 2; i++){
        ReadPearson(name[i], surname[i], age[i]);
    }

     for (int i = 0; i < 2; i++){
        WritePearson(name[i], surname[i], age[i]);
    }
    
    return 0;
}