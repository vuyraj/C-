#include<iostream>
using namespace std;

int main()
{
	bool a[3],b[3];
	a[0]=0;
	a[1]=0;
	a[2]=1;
	a[3]=1;
	b[0]=0;
	b[1]=1;
	b[2]=0;
	b[3]=1;
	int s;
	start:
	cout<<"enter 1 for conjunction "<<endl<<"enter 2 for disjunction"<<endl<<"enter 3 for Implication"<<endl<<"enter 4 for bi implication"<<endl<<"other numbers for exit"<<endl;
	cin >>s;
	switch(s){
		case 1:	
	//conjunction
			cout<<"INPUT					OUTPUT"<<endl;
			cout<<"A		B			C	"<<endl;
			for (int i = 0; i<4;i++){
				cout<<a[i]<<"		"<<b[i]<<"			"<<a[i]&&b[i];
				cout<<endl;
				}
		goto start;
	case 2:	
		//disjunction
			cout<<"INPUT					OUTPUT"<<endl;
			cout<<"A		B			C	"<<endl;
			for (int i = 0; i<4;i++){
				cout<<a[i]<<"		"<<b[i]<<"			"<<(a[i]||b[i]);
				cout<<endl;
			}
			goto start;
	case 3:
		//implication
		cout<<"INPUT					OUTPUT"<<endl;
		cout<<"A		B			C	"<<endl;
		for (int i = 0; i<4;i++){
			if (a[i]==1 && b[i]==0){
			cout<<a[i]<<"		"<<b[i]<<"			"<<0;
			cout<<endl;	
			}
			else{
			cout<<a[i]<<"		"<<b[i]<<"			"<<1;
			cout<<endl;
			}
		}
		goto start;
	case 4:
		//biimplication
		cout<<"INPUT					OUTPUT"<<endl;
		cout<<"A		B			C	"<<endl;
		for (int i = 0; i<4;i++){
			if (a[i]==b[i]){
			cout<<a[i]<<"		"<<b[i]<<"			"<<1;
			cout<<endl;	
			}
			else{
			
			cout<<a[i]<<"		"<<b[i]<<"			"<<0;
			cout<<endl;
		}
		}
		goto start;
}
	return 0;
	
}
