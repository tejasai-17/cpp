#include <iostream>

int main(){

//Lenght method
    std::string name;
    std::string password;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your password: ";
    std::cin >> password;
    if (password.length()>8){
        std::cout << "Password must be less then 12 charactor\n";
    }
    else{
        std::cout  << "welcome " << name << "\n";
        std::cout  << "password: " << password << "\n";
    }
    
// //Empty method
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);
//     if (name.empty()){
//     std::cout << "you havent entered your name\n";
//     }
//     else{
//     std::cout  << "welcome " << name << "\n";
//     }

// //Clear method
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);
//     name.clear();
//     std::cout << "Hello" << name;
    
// //Append method
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);
//     name.append("@gmail.com");
//     std::cout <<  name << "\n";

    return 0;
}

//visit website for more string method https://www.cplusplus.com/reference/string/string/ 