#include <iostream>

int main(){
    using namespace std;

    int age;
    cout << "what's your age: ";
    cin >> age;

    (age >= 18) ? cout << "your good to go" : cout << "you must be above 18";

    return 0;
}

/* ternary acts same as if-else statement first give a condition 
and next to that add-(?) if its true it will do what you have 
written in that statement given before double cords(:), after 
you give this double cords(:) that statement will be done 
if the condition dosent match */
