#include <iostream>

class employee{
    public:
        std::string name;
        int ID;
        int age;

        void eat(){
            std::cout << "This employee is eating\n";
        }
        void sleep(){
            std::cout << "This employee is sleeping\n";
        }
};

int main(){

    employee e1;
    e1.name = "XYZ";
    e1.ID = 101;
    e1.age = 42;

    std::cout << e1.name << "\n";
    std::cout << e1.ID << "\n";
    std::cout << e1.age << "\n";
    e1.eat();
    e1.sleep();

    return 0;
}