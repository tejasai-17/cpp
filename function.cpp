#include <iostream>

void info(std::string name,int age,std::string DOB);

int main(){
    std::string name = "Tejasai"; 
    int age = 17;
    std::string DOB = "17/09/2007";

    info(name,age,DOB);

    return 0;
}

void info(std::string name,int age,std::string DOB){
    std::cout << "Your Name: " << name << "\n";
    std::cout << "Your now " << age << " year's old" << "\n";
    std::cout << "Your DOB: " << DOB << "\n";
}