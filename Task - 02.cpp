/*      SIMPLE CALCULATOR
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/

#include<iostream>
using namespace std ; 

int main ()
{
    cout<<endl ;
    cout<<"1. Addition"<<endl ;
    cout<<"2. Subtraction"<<endl ;
    cout<<"3. Multiplication"<<endl ;
    cout<<"4. Division"<<endl ;
    cout<<"-------------------"<<endl ;

    cout<<"Enter your choice : " ;
    int x ;
    cin>>x ;
    cout<<endl ;

    double a , b ;
    cout<<"Enter 1st operand : ";
    cin>>a ;
    cout<<"Enter 2nd operand : ";
    cin>>b ;
    cout<<"-----------------------"<<endl ;

    switch(x)
    {
        case 1: cout<<"Addition is "<<a+b ;
                break ;
        case 2: cout<<"Subtraction is "<<a-b ;
                break ;
        case 3: cout<<"Multiplication is "<<a*b ;
                break ;
        case 4: cout<<"Division is "<<a/b ;
                break ;
        default : cout<<"Wrong choice ! "<<endl ;
                  break ;
    }
    return 0 ;

}
