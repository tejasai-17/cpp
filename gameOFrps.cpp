#include <iostream>
#include <ctime>

char userchoise();
char systemchoise();
void showchoise(char choise);
void winner(char user,char system);

int main(){

    char user;
    char system;

    user=userchoise();
    std::cout << "Your choise: ";
    showchoise(user);   

    system=systemchoise();
    std::cout << "System choise: ";
    showchoise(system);

    winner(user,system);

    return 0;
}

char userchoise(){

    char user;
    do
    {
        std::cout << "choose rock,paper,scissor!\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissor\n";
        std::cin >> user;
    } while (user != 'r' && user != 'p' && user != 's');
    
    return user;
}
char systemchoise(){

    srand(time(0));
    int num = rand() % 3 +1;

    switch (num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    return 0;
}
void showchoise(char choise){
    switch (choise){
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissor\n";
            break;
    }  
}
void winner(char user,char system){

    switch (user){
    case 'r':
        if (system == 'r'){
            std::cout << "it's tie";
        }
        else if (system == 'p'){
            std::cout << "You lose";
        }
        else{
            std::cout << "You win";
        }
        break;
    case 'p':
        if (system == 'r'){
            std::cout << "You win";
        }
        else if (system == 'p'){
            std::cout << "it's tie";
        }
        else{
            std::cout << "You lose";
        }
        break;
    case 's':
        if (system == 'r'){
            std::cout << "You lose";
        }
        else if (system == 'p'){
            std::cout << "You win";
        }
        else{
            std::cout << "it's tie";
        }
        break;
    }
}