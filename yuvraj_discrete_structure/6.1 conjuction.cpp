//WAP to display the truth table of conjunction, disjunction, implication and bi-implication.
#include<iostream>
using namespace std;

int main()
{
	bool a[]={0,0,1,1};
	bool b[]={0,1,0,1};
	int s;
	start:
	cout<<"enter 1 for conjunction "<<endl<<"enter 2 for disjunction"<<endl<<"enter 3 for Implication"<<endl<<"enter 4 for Bi-Implication"<<endl<<"other numbers for exit"<<endl;
	cin >>s;
	switch(s){
		case 1:	
	//conjunction
			cout<<"INPUT \t\t\tOUTPUT"<<endl;
			cout<<"A \tB\t\tC"<<endl;
			for (int i = 0; i<4;i++){
				cout<<a[i]<<"\t"<<b[i]<<"\t\t"<<a[i]&&b[i];
				cout<<endl;
				}
		goto start;
	case 2:	
		//disjunction
			cout<<"INPUT \t\t\tOUTPUT"<<endl;
			cout<<"A \tB\t\tC"<<endl;
			for (int i = 0; i<4;i++){
				cout<<a[i]<<"\t"<<b[i]<<"\t\t"<<(a[i]||b[i]);
				cout<<endl;
			}
			goto start;
	case 3:
		//implication
			cout<<"INPUT \t\t\tOUTPUT"<<endl;
			cout<<"A \tB\t\tC"<<endl;
		for (int i = 0; i<4;i++){
			cout<<a[i]<<"\t"<<b[i]<<"\t\t"<<((!a[i])||b[i]);
			cout<<endl;	
			}
		
		goto start;
	case 4:
		//biimplication
			cout<<"INPUT \t\t\tOUTPUT"<<endl;
			cout<<"A \tB\t\tC"<<endl;
		for (int i = 0; i<4;i++){
			cout<<a[i]<<"\t"<<b[i]<<"\t\t"<<(((!a[i])||b[i])&&((!b[i])||a[i]));
			cout<<endl;	
			}
		goto start;
}
	return 0;
	
}
