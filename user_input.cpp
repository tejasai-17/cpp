// #include <iostream>
// int main(){

//     using namespace std;

//     string  name;
//     int age;

//     cout << "what is your name: ";
//     cin >> name;
//     cout << "what is your age: ";
//     cin >> age;

//     cout << "hello " << name << "\n";
//     cout << "age: " << age;
//     return 0;
// }

// we use (cin >>) to ask input from user

#include <iostream>
int main(){

    using namespace std;

    string  name;
    int age;

    cout << "what is your fullname: ";
    getline(cin >> ws, name);
    cout << "what is your age: ";
    cin >> age;

    cout << "hello " << name << "\n";
    cout << "age: " << age;
    return 0;
}

/* As you can see i have used getline because if we want to input a
string datatype which is having space in between string we use 
getline */
/*You may thing why i used ws in getline line because if we add 
getline keyword after another input statement it will not ask 
that getline line so only we use ws(wide space) to rectify 
that problem*/