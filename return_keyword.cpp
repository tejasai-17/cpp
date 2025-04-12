#include <iostream>

std::string fullname(std::string FN,std::string SN);

int main(){
    std::string FN = "Tejasai";
    std::string SN = "S";
    std::string Fullname = fullname(FN,SN); 

    std::cout << "Fullname: " << Fullname << "\n";
    return 0;
}

std::string fullname(std::string FN,std::string SN){
    return FN + ' ' + SN;
}