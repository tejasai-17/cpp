/*#include <iostream>
int main(){
    std::cout << "hello world" "\n";
    std::cout << "i am tejasai" "\n";
}*/


//declaration program
/*#include <iostream>
int main(){
    int x;
    x = 55;
    std::cout << "x:" << x << std::endl;
}*/

// #include <iostream>
// #include <cmath>

// int main(){
//     using namespace std;
//     double a;
//     double b;
//     cout << "enter a value: ";
//     cin >> a;
//     cout << "enter a value: ";
//     cin >> b;
//     double c = pow(a,b);

//     cout << "pow: " << c;
//     return 0;
// }

// #include <iostream>

// int main(){

//     std::string name;
//     std::cout << "Enter ur name: ";
//     std::cin >> name;
//     std::cout << "Your name is: " << name << "\n";

//     return 0;
// }


// #include <iostream>

// double deposit();
// double withdraw();
// void viewbalance(double balance);

// int main(){

//     int choise;
//     double balance;

//     do
//     {
//         std::cout << "Enter any bellow option\n" << "1. deposit\n" << "2. withdraw\n" << "3. viewbalance\n" << "4. Exit\n";
//     std::cin >> choise;
    
//     switch (choise)
//     {
//     case 1:
//         balance += deposit();
//         viewbalance(balance);
//         break;
//     case 2:
//         balance -= withdraw();
//         viewbalance(balance);
//         break;
//     case 3:
//         viewbalance(balance);
//         break;
//     case 4:
//         std::cout << "thank you";
//         break;
//     default: 
//         std::cout << "Enter valid choise"; 
//     }
//     } while (choise != 4);
    

//     return 0;
// }

// double deposit(){
//     double amount;

//     std::cout << "Enter the depoist amount: ";
//     std::cin >> amount;
    
//     if(amount>0){
//         return amount;
//     }
//     else{
//         std::cout << "Not a valid amount to enter";
//     }
// }


// double withdraw(){
//     double amount;

//     std::cout << "Enter the depoist amount: ";
//     std::cin >> amount;
    
//     if(amount>0){
//         return amount;
//     }
//     else{
//         std::cout << "Not a valid amount to enter";
//     }
// }


// void viewbalance(double balance){
//     std::cout << "Your balance: " << balance << "\n";
// }

// #include <iostream>

// int main(){

//     char choise;
//     double a;
//     double b;

//     std::cout << "Enter the value of a: \n";
//     std::cin >> a;

//     std::cout << "Enter the value of b: \n";
//     std::cin >> b;

//         std::cout << "---cal---\n";
//         std::cout << "Enter a operation\n" << "add='+'\n" << "sub='-'\n" << "mult='*'\n" << "div='/'\n";
//         std::cin >> choise;

//     switch (choise)
//     {
//     case '+':
//         std::cout << "The value of a+b= " << a+b << "\n";
//         break;
//     case '-':
//         std::cout << "The value of a-b= " << a-b << "\n";
//         break;
//     case '*':
//         std::cout << "The value of a*b= " << a*b << "\n";
//         break;
//     case '/':
//         std::cout << "The value of a/b= " << a/b << "\n";
//         break;
//     default:
//         std::cout << "Not valid operator";
//         break;
//     }
//     std::cout << "---END---";

//     return 0;
// }

// #include <iostream>

// int main(){

//     int A[]={12,22,32,42};
//     std::cout << A[3];
//         return 0;
// }