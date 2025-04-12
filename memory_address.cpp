/*the memory address of an valiable can be found using
& symbol while entering & symbol before entering 
variable name, example is given bellow:*/

#include <iostream>

int main(){

    std::string name = "tejasai";
    int num = 1;
    bool eaten = true;

    std::cout << &name << '\n';
    std::cout << &num << '\n';
    std::cout << &eaten << '\n';

    return 0;
}