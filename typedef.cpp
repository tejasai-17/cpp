/*We use typedef to make program readablity and reduce typo, 
typedef can be only used for data types like sting,int,etc
like example if we wnat to set the variable to string we use 
std::string, but now insted of that we can use typedef 
and write the statement and give a name to that statement,
now i'll show you a basic example where typedef is used*/ 


#include <iostream>
#include <vector>

typedef std::string  string_t;

int main(){

    string_t firstname = "tejasai"; 
    std::cout << firstname << "\n";
 
    return 0;
}

/*As you can see i have used (#include <vector>) because 
we have to include vector to use typedef keyword*/