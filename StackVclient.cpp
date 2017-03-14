#include <iostream> 
#include <string> 
#include "StackV.h"//Use vector implementation of Stack

using namespace std;
        
// function to reverse the other of a string 
string reverseString(string str)
{
     string res; // declare a variable of string type
     Stack stk; // declare an object of class Stack type

   for (auto ch : str ) // iteratively push each letter of the string onto the vector
      stk.push(ch);

    /*
	while the vector is not empty,
	iteratively add the first item in the vector to the string res,
	then remove the first dtring from the vecto.
	repeat process until the the vector is emtpty.
    */
    while( stk.size() > 0) 
       {
	  res +=  stk.top();
	   stk.pop();
       }

   return res; // return the created string
}


int main()
{         
    string a_string = "COMP2115 here we come!!!"; // declare string 
     
    cout << "\"" << a_string << "\"" << endl <<  "\"" << reverseString(a_string) << "\"" << endl; // print the original string and the string manipulated by the reverseString function
	    
    return 0;
        
}
