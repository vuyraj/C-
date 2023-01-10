//wap to find the union of two sets
#include<iostream>
using namespace std;

int main()
{
	//defining variables
  int a[100];
  int b[100];
int c[100],k=0;
int p[100],q[100];
 int n1,n2;
 int f=0,d=0,e=0;
 // input of set datas
    cout<<"Enter the size of set a"<<endl;
    cin>>n1;
     cout<<"Enter the size of set b"<<endl;
    cin>>n2;
    //input of set a
    cout<<"Enter the members of set a"<<endl;
    for(int i=0;i<n1;i++){
    cin>>a[i];
    }
    cout<<"A={";
    for(int i=0;i<n1;i++){
        if (i!= n1-1)
        cout<<a[i]<<" , ";

        if (i == n1-1)
        cout <<a[i];
    }
    cout<<"}"<<endl;
    //input of set b
   cout<<"Enter the members of set b"<<endl;
    for(int i=0;i<n2;i++){
    cin>>b[i];
    }
      cout<<"B={";
    for(int i=0;i<n2;i++){
        if (i!= n2-1)
        cout<<b[i]<<" , ";

        if (i == n2-1)
        cout <<b[i];
    }
    cout<<"}"<<endl;
    //finding the intersection of set a and b
  for(int i=0;i<n1;i++){
    for(int J=0;J<n2;J++)
    if(a[i]==b[J]){
        c[k]=a[i];
        k=k+1;
        d=k;
    }
  }
     e=n1+n2-d;		//no of members of set c
 for (int i = 0 ; i<n1 ; i++){
 p[i]=a[i];
 }
 
 //p is the set of whole set a and set b
k=0;
 for (int i = n1; i<n1+n2;i++)
 {
 	p[i]=b[k];
 	k++;
 }

//q is the set of whole set a and b not containg intersection set
k=0;
for ( int i = 0 ; i < n1+n2;i++ ){
	f=0;
	for (int j = 0;j<n1+n2-e;j++ ){
		
		if (p[i]==c[j]){
		f=1;}
		}
	if(f==0){
		q[k]=p[i];
		k++;
	}
	
}


//transferring data from q to c and making c the union set.
  k=0;
  for (int i =n1+n2-e; i<e;i++){
  	c[i]=q[k];
  	k++;
  }
    //printing of union of set a and b which is c.
  cout<<"Union is ";
    cout<<"C={";
    for(int i=0;i<e;i++){
        if (i!= e-1)
        cout<<c[i]<<" , ";

        if (i == e-1)
        cout <<c[i];
    }
    cout<<"}"<<endl;
    return 0;
}
