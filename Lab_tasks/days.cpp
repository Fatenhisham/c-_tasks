/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ; 
int main()
{
    int day ; 
    
    cin>>day   ;
  switch (day) {
    case 1:
      cout<<"Sunday";
      break ; 
    case 2:
      cout<<"Monday";
       break ; 
    case 3:
      cout<<"Tuesday";
       break ; 
    case 4:
      cout<<"Wednesday";
       break ; 
    case 5:
      cout<<"Thursday";
       break ; 
    case 6:
      cout<<"Friday";
       break ; 
    case 7:
      cout<<"Saturday";
       break ; 
    default:
      cout<<"not valid number";
  }

    return 0;
}