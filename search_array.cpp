#include <iostream>

int search(int num[],int size,int mynum);

int main(){

    int num[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(num)/sizeof(num[0]);
    int index;
    int mynum;

    std::cout << "Enter ur number: ";
    std::cin >> mynum;

    index = search(num,size,mynum);

    if(index != -1){
        std::cout << "Element found in index: " << index << '\n';
    }
    else{
        std::cout << "Not found" << '\n';
    }
    return 0;
}

int search(int num[],int size,int mynum){
    for(int i=0;i<size;i++){
        if(num[i]==mynum){
            return i;
        }
    }
    return -1;
}
