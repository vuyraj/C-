//WAP to display the truth table of compound proposition
#include<iostream>
using namespace std;

int main()
{
	bool a[]={0,0,0,0,1,1,1,1};
	bool b[]={0,0,1,1,0,0,1,1};
	bool c[]={0,1,0,1,0,1,0,1};
	bool d[7];
	char p[100];
	int l=0;

//input
	cout<<"enter propositions"<<endl;
	cin>>p;
	while (p[l]!='\0'){
		cout<<p[l];
		l++;
	}
	l--;
	cout<<l;
	
	if(p[0]=='a'){
		for (int i = 0; i<7;i++){
		d[i]=a[i];
		}
	}
	if(p[0]=='b'){
		for (int i = 0; i<7;i++){
		d[i]=b[i];
		}
	}
	if(p[0]=='c'){
		for (int i = 0; i<7;i++){
		d[i]=c[i];
		}
	}
		
	
	for (int i =0;i<l;i++){
						
		switch (p[i]){							
			case '&' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<7;j++){
							d[j] &= a[j] ;
						}
					break;
					
					case 'b':
						for (int j=0;j<7;j++){
							d[j] &= b[j] ;
						}
					break;
					
					case 'c':
						for (int j=0;j<7;j++){
							d[j] &= c[j] ;
						}
					break;
				}
			break;
								
			case '|' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<7;j++){
							d[j] |= a[j] ;
						}
					break;
					
					case 'b':
						for (int j=0;j<7;j++){
							d[j] |= b[j] ;
						}
					break;
					
					case 'c':
						for (int j=0;j<7;j++){
							d[j] |= c[j] ;
						}
					break;
				}
			break;
								
			case 'I' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<7;j++){
							d[j] = ((!d[j])||a[j]) ;
						}
					break;
					
					case 'b':
						for (int j=0;j<7;j++){
						d[j] = ((!d[j])||b[j]) ;
						}
					break;
					
					case 'c':
						for (int j=0;j<7;j++){
							d[j] = ((!d[j])||b[j]) ;
						}
					break;
				}

			break;
								
			case 'B' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<7;j++){
							d[j] = (((!d[j])||a[j])&&((!a[j])||d[j])) ;
						}
					break;
					
					case 'b':
						for (int j=0;j<7;j++){
							d[j] = (((!d[j])||b[j])&&((!b[j])||d[j])) ;
						}
					break;
					
					case 'c':
						for (int j=0;j<7;j++){
								d[j] = (((!d[j])||c[j])&&((!c[j])||d[j])) ;
						}
					break;
				}
	
				
		
			break;
							
			}
		
	}
	

	
	
	
//output	
	cout<<"INPUT \t\t\tOUTPUT"<<endl;
	cout<<"A\tB\tC\t\tD"<<endl;
	for (int i = 0; i<7;i++){
		cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t\t"<<d[i];
		cout<<endl;
		}
				
}
