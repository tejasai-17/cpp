#include <iostream>

int main(){

    std::string name[5];
    int size = sizeof(name)/sizeof(name[0]);
    std::string temp;

    for(int i=0; i<size; i++){
        std::cout << "Enter a name at index or 'q' to quite " << i << " :";
        std::getline(std::cin , temp) ;
        if (temp == "q"){
            break;
        }
        else{
            name[i]=temp;
        }
    }

    std::cout << "You entered the following name \n";

    for(int i=0;!name[i].empty();i++){
        std::cout << name[i] << "\n";
    }
    
    return 0;
}