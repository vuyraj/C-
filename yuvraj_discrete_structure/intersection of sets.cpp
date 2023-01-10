//wap to find the union of two sets
#include<iostream>
using namespace std;
int main()
{
	//defining variables
  int a[100];
  int b[100];
int c[100],k=0;
 int n1,n2,f;
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
    //finding the union of set a and b
  for(int i=0;i<n1;i++){
    for(int J=0;J<n2;J++)
    if(a[i]==b[J]){
        c[k]=a[i];
        k=k+1;
    }
   
  }
  //finding union
 for(int i=0;i<n1;i++){
 	f=0;
    for(int J=0;J<n2;J++){
    	if(a[i]==b[J]){
       	 f=1;
    	}
	}	
   if (f==0){
    c[k]=a[i];
    k=k+1;
    }
   	
   
  }
  
 for(int i=0;i<n1;i++){
 	f=0;
    for(int J=0;J<n2;J++){
    	if(b[i]==a[J]){
      	 f=1;
    	}
	}
   if (f==0){
        c[k]=b[i];
        k=k+1;
		}
    
  }

cout<<k;
  //printing of union of set a and b which is c.
  cout<<"Intersection is";
    cout<<"C={";
    for(int i=0;i<=k;i++){
        if (i!= k-1)
        cout<<c[i]<<" , ";

        if (i == k-1)
        cout <<c[i];
    }
    cout<<"}"<<endl;
    return 0;
}
