#include <iostream>

class employee{
    public:
        std::string nmae;
        int ID;
        double salary;

        employee(std::string name,int ID,double salary){
            this->nmae = name;
            this->ID = ID;
            this->salary = salary;
        }
};

void printemployee(employee &e1,employee &e2);

int main(){
       
    employee e1("abhi",101,10000.00);
    employee e2("varun",102,12000.00);

    printemployee(e1,e2);

    return 0;
}

void printemployee(employee &e1,employee &e2){
    std::cout << e1.nmae << '\n';
    std::cout << e1.ID << '\n';
    std::cout << e1.salary << '\n';
    std::cout << e2.nmae << '\n';
    std::cout << e2.ID << '\n';
    std::cout << e2.salary << '\n';
}