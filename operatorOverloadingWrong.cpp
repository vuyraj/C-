#include <iostream>
#include<string.h>
using namespace std;

class st{

public:
char x[3] ;
st operator +(st y){
  int a=0,b=0;
 // char c[100];
  a=int(x[0])+int(y.x[0]);
  b=int(x[2])+int(y.x[2]);

char e[100];
  char c = char (a); 
    char d = char (b); 
    strcat(e,c);
  strcat(e,"+");
  strcat(e,d);
  strcat(e,"i");
  strcpy(y.x,e);
  return y;
}

};

int main() {
    st s1,s2,s3;
    cin>>s2.x;
  cin>>s1.x;
    s3=s1+s2;
      cout<<s3.x;

  
    return 0;
}
