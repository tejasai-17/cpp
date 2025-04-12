#include <iostream>

int main(){
    using namespace std;

    int month;
    cout << "Enter a month(1-12): ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "its january";
        break;
    case 2:
        cout << "its February";
        break;
    case 3:
        cout << "its March,";
        break;
    case 4:
        cout << "its April,";
        break;
    case 5:
        cout << "its May";
        break;
    case 6:
        cout << "its June";
        break;
    case 7:
        cout << "its July";
        break;
    case 8:
        cout << "its August";
        break;
    case 9:
        cout << "its September";
        break;
    case 10:
        cout << "its October";
        break;
    case 11:
        cout << "its November";
        break;
    case 12:
        cout << "its December";
        break;
    default:
        cout << "Enter any number in between (1-12)";
        break;
    }

    return 0;
}