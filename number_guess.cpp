#include <iostream>
#include <ctime>

int main(){

    int num;
    int gusse;
    int tries=0;

    srand(time(NULL));

    num = (rand() % 100)+1;

    std::cout << "---Number_Gussing_Game---\n";
    
    do
    {
        std::cout << "gusse a number between (1-100): ";
        std::cin >> gusse;
        tries+=1;

        if (gusse > num){
            std::cout << "number is too high\n";
        }
        else if (gusse < num){
            std::cout << "number is too low\n";
        }
        else{
            std::cout << "Correct gusse #number of tries: " << tries << "\n";
        }

    } while (gusse != num);

    std::cout << "---End---\n";

    return 0;
}