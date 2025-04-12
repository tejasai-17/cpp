#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout<< "---temperature coverter---\n";
    std::cout<< "F = Fahrenheit\n";
    std::cout<< "C = Celsius\n";
    std::cout<< "What unit you want to convert: ";
    std::cin >> unit;

    if (unit== 'F' || 'f'){
        std::cout<< "Enter temperature in celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout << "temperture after converting it to fahrenheit: " << temp << "\n";
    }
    else if (unit == 'C' || 'c'){
        std::cout<< "Enter temperature in fahrenheit: ";
        std::cin >> temp;
        temp = (temp-32) * 5/9;
        std::cout << "temperture after converting it to fahrenheit: " << temp << "\n";
    }
    else{
        std::cout<< "Enter temperature only in celsius or fahrenheit: ";
    }
    
    
    std::cout<< "---END---\n";
    
    return 0;
}