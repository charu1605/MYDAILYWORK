/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
float addition(float a, float b)
{
    cout<<"Addition Of Given Numbers Is "<<endl;
    return a+b;
}
float subtraction(float a, float b)
{
    cout<<"Subtraction Of Given Numbers Is "<<endl;
    return a-b;
}
float multiplication(float a, float b)
{
    cout<<"Multiplication Of Given Numbers Is "<<endl;
    return a*b;
}
float division(float a, float b)
{
    if(b==0){
        cout<<"Division Is Not Possible"<<endl;
        return -1;
    }
    else
    cout<<"Division Of Given Numbers Is "<<endl;
    return a/b;
}
int main()
{
    float first, second;
    int choose;
    cout<<"Enter First Number "<<endl;
    cin>>first;
    cout<<"Enter Second Number "<<endl;
    cin>>second;
    cout<<"Choose The Operation You Wants To Perform"<<endl;
    cout<<"1. FOR ADDITION"<<endl<<"2. FOR SUBTRACTION"<<endl<<"3. FOR MULTIPLICATION"<<endl<<"4. FOR DIVISION"<<endl;
    cin>>choose;
    switch(choose){
        case 1:
        cout<<addition(first,second);
        break;
        case 2:
        cout<<subtraction(first,second);
        break;
        case 3:
        cout<<multiplication(first,second);
        break;
        case 4:
        cout<<division(first,second);
        break;
        default:
        cout<<"Invalid Operation"<<endl;
    }
    return 0;
}
