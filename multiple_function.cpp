#include <iostream>

void PC();
void PC(std::string modification);
void PC(std::string modification1,std::string modification2);

int main(){

    // PC();
    PC("RTX-4090","Intel-i9");

    return 0;
}

void PC(){
    std::cout << "Here is you 12gb ram PC!\n";
}
void PC(std::string modification){
    std::cout << "Here is you 12gb ram PC with" << modification << "\n";
}
void PC(std::string modification1,std::string modification2){
    std::cout << "Here is you 12gb ram PC with " << modification1 << " and with " << modification2 << "\n";
}