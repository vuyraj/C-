// Program to demonstrate GCD
#include <iostream> 
using namespace std;
// Function to return gcd of a and b 
int gcd(int a, int b) { 
	if (a == 0) 
		return b; 
	else
		return gcd(b%a, a); 
} 


int main() { 
	int a,b;
	cout<<"Enter the Value of a and b to find gcd():   ";
    cin>>a>>b;
	cout<<"GCD("<<a<<","<<b<<" ) = "<<gcd(a, b); 
	return 0; 
} 
