#include <iostream>

struct employee{
    std::string name;
    int ID;
    double salary;
};
void printemp(employee &e);

int main(){

    employee e1;
    e1.name = "XYZ-1";
    e1.ID = 101;
    e1.salary = 10000.00;
    employee e2;
    e2.name = "XYZ-2";
    e2.ID = 102;
    e2.salary = 12000.00;

    printemp(e1);
    printemp(e2);

    return 0;
}

void printemp(employee &e){
    std::cout << "Employee details" << '\n' << "Name: " << e.name << "\n" << "ID: " << e.ID << '\n' << "Salary: " << e.salary << '\n'; 
}