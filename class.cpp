#include<iostream>
using namespace std;
class student{
    public : string name;
             int roll;
             int id;
};
int main()
{
    student s1;
    s1.name = "Aditya";
    s1.roll = 20;
    s1.id = 4503;

    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.id<<endl;
    
    return 0;
}