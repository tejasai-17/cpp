#include <iostream>

int main(){
    using namespace std;

    int age;
    cout << "what's your age: ";
    cin >> age;

    if(age >= 18 and age < 35){
        cout << "your good to go";
    }
    else if (age > 35){
        cout << "you cant access this"; 
    }
    else{
        cout << "you must be above 18";
    }
    

    return 0;
}

/* if statement is used to check any type of condition,if the if 
statement is not true it will go to else if part and check that 
condition if in case both if and else if statement are not 
true it will print else part*/