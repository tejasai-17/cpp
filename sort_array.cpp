#include <iostream>

void sort(int num[],int size);

int main(){

    int num[]={2,4,6,5,1,8,7};
    int size = sizeof(num)/sizeof(num[0]);

    sort(num,size);

    for(int n : num){
        std::cout << n << ' ';
    }

    return 0;
}

void sort(int num[],int size){

    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
}