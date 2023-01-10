#include <iostream>
using namespace std;
int floor(double v) {
     int t;
     if (v - (int) v == 0)	// check if number a integer or not	
          return v;		//if then it is the answer.
     else {
          if (v < 0)  {		//check if the number is negative or not
              t = int(v) - 1;	//if it is negative then  it's integer minus one is the floor
              return t;
          }
          else 
return v;	//if positive then it's integer is the floor
     }
}
int ceiling(double v) {
     if (v - (int) v == 0)	// check if the number is a integer  or not	 
          return v;		//if then it is the answer.
     else {
          if (v < 0)		//check if the number is negative or not
               return v;	//if positive then it's integer is the ceiling
          else 
return v + 1;	//if positive then it's integer plus one is the ceiling
     }
}
int main()
{
     double v;
     cout << "Enter a number : ";
     cin >> v;
     cout << endl << "Ceiling of " << v << " is : " << ceiling(v);
     cout << endl << "Floor of " << v << " is : " << floor(v);
}

