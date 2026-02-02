#include<iostream>
using namespace std;
int sum = 0;
int main()
{
    int arr[5]= {1,2,3,4,5};
    cout<<"Array elements"<<endl;
      for(int i=0; i<5; i++){
         cout<< arr[i]<<endl;  
      }
      for(int i=0 ; i<5 ; i++){
        sum = sum + arr[i];
      }
      cout<<"Sum of array is "<<sum;
      

    return 0;
}