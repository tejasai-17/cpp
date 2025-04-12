#include <iostream>
class pizza{
    public:
        std::string topping1;
        std::string topping2;

        pizza(){

        }
        pizza(std::string topping1,std::string topping2){
            this->topping1=topping1;
            this->topping2=topping2;
        }
        pizza(std::string topping1){
            this->topping1=topping1;
        }
};

int main(){

    pizza pizza1("corn","cheese");
    pizza pizza2("cheese");
    pizza pizza3;

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza1.topping2 << '\n';
    std::cout << '\n';
    std::cout << pizza2.topping1 << '\n';
    return 0;
}

