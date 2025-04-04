#include <iostream>

double R(int arr[],int size);

int main(){

    int arr[]={12,15,10,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    double result = R(arr,size);

    std::cout << "sum of numbers: " << result << '\n';
    return 0;
}

double R(int arr[],int size){
    int total = 0;

    for(int i=0; i< size ; i++){
        total += arr[i];
    }

    return total;

}