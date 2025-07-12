/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ; 
int main()
{
    int num1; 
     int num2; 
    cin>>num1>>num2 ;
    if(num1>num2) cout<<"num1 is greater" ;
    else if (num2>num1) cout<<"num2 is greater" ;
    else cout<<"numbers is equal" ;

    return 0;
}