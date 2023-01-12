// Program to demonstrate working of extended  Euclidean Algorithm 
#include <iostream> 
using namespace std;
int gcdExtended(int a, int b, int* x, int* y) 
{ 
	// Base Case 
	if (a == 0) { 
		*x = 0; 
		*y = 1; 
		return b; 
	} 

	int x1, y1; // To store results of recursive call 
	int gcd = gcdExtended(b % a, a, &x1, &y1); 

	// Update x and y using results of recursive  call 
	*x = y1 - (b / a) * x1; 
	*y = x1; 

	return gcd; 
} 
int main() 
{ 
	int a,b,x=1, y=1; 
	cout<<"Enter the Value of a and b :   ";
    cin>>a>>b;

	int g = gcdExtended(a, b, &x, &y); 
	cout<<endl<<"GCD("<<a<<","<<b<<") = "<< g; 
	cout<<endl<<" The Extended Euclidean Algorithm is :   "<<g<<" = "<< x <<" * " <<a <<" + "<< y<< " * " <<b ; 
	return 0;
} 

