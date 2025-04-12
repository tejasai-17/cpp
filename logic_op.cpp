// LO=logical operator

#include <iostream>
int main(){
    using namespace std;

    int Age;
    cout << "Enter your age: ";
    cin >> Age;
    bool DL;

//this below program is for && operator
    if (Age < 18 && Age > 0){
        cout << "your not an adult\n";
    }
    else{
        cout << "your now an adult\n";
    }


// //this below program is for || operator
// if (Age <= 18 || Age >= 0){
//     cout << "your not an adult\n";
// }
// else{
//     cout << "your now an adult\n";
// }

//this below program is for ! operator
if (!DL==false){
    cout << "you cant have DL\n";
}
else{
    cout << "you can have DL\n";
}

    return 0;
}