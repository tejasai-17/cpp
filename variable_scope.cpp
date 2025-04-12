//Globle variable is declaired outside the function
//local variable is declaired only inside of any function 

#include <iostream>

int i = 3;//globle

void num();

void print_globle();

int main(){

    int i = 2;//local
    num();//used this for calling num function
    std::cout << i << "\n";
    print_globle();//used this for calling print_globle function
    return 0;
}
void num(){
    int i = 1;//local
    std::cout << i << "\n";
}
void print_globle(){
    std::cout << ::i << "\n";//(::) is used to call globle variable or print globle variable
}