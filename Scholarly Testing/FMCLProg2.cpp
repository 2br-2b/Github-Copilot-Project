/*
Homework 2 
In C++, write code that accepts a positive int, then prints out the following patterns 
If 4 were entered in  
**** 
***  
** 
* 
 
* 
** 
*** 
**** 
 
****  
  ***  
    **  
      * 
 
    * 
   ** 
  ***  
**** 
*/


#include <iostream>
using namespace std;


int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = num - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}


/*
Enter a positive integer: 4
****
***
**
*
*
**
***
****
****
  ***
    **
      *
    *
   **
  ***
****
*/