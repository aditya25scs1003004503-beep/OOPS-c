#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    a = 10;
    b = 15;
    cout<<"Values before swapping are "<<a <<","<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"Values after swapping are "<<a <<","<<b;


    return 0;
}