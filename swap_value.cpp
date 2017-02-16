//swap_value.cpp
//Diba Mirza
//Program to illustrate call by value by attempting to swap the values of two variables, 
//See swap.cpp and swap_ref.cpp to contrast this with call by address and call by reference

#include<iostream>
using namespace std;

void swapValue(int x, int y);

int main(){
    int a =10, b =20;
    cout<<"Value of a and b : "<<a<<" "<<b<<endl;
    swapValue(a,b);
    cout<<"Value of a and b : "<<a<<" "<<b<<endl;
}

void swapValue(int x, int y){
    int tmp =x;
    x = y;
    y =tmp;
}


