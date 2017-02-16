//swap.cpp
//Diba Mirza
//Program to illustrate call by address 

#include<iostream>
using namespace std;

void swapValue(int *x, int *y);

int main(){
    int a =10, b =20;
    int *pa=&a , *pb=&b ;
    cout<<"Value of a and b : "<<a<<" "<<b<<endl;
    swapValue(pa,pb);
    cout<<"Value of a and b : "<<a<<" "<<b<<endl;
}
//Precondition: x and y are pointing to valid locations
//Post condition: values pointed to by x and y are swapped
void swapValue(int *x, int *y){
  /*  if( !x || !y) //null check
        return;*/
    int tmp =*x;
    *x = *y;
    *y =tmp;
}


