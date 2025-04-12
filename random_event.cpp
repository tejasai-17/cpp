#include <iostream>
#include <ctime>

int main(){

    srand(time(0));

    int num = (rand() % 5)+1;

    switch (num){
    case 1:
        std::cout << "you have now won lottery";
        break;
    case 2:
        std::cout << "you have now won bike";
        break;
    case 3:
        std::cout << "you have now won TV";
        break;
    case 4:
        std::cout << "you have now won Pizza";
        break;
    case 5:
        std::cout << "you have now won PC";
        break;
    }

    return 0;
}