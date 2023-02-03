//WAP to display the truth table of compound proposition

/*
input variables = a , b , c
operandas:
	And = &
	Or	= |
	negation = !
	implication = I
	bi-implication = B
	
*/
//
#include<iostream>
using namespace std;

int main()
{
	bool a[]={0,0,0,0,1,1,1,1};
	bool b[]={0,0,1,1,0,0,1,1};
	bool c[]={0,1,0,1,0,1,0,1};
	bool d[8];
	char p[100];
	int l=0;
	int neg = 0;

//input
	cout<<"enter propositions"<<endl;
	cin>>p;
	while (p[l]!='\0'){
		cout<<p[l];
		l++;
	}
	l--;
	
	if(p[0]=='a'){
		for (int i = 0; i<8;i++){
		d[i]=a[i];
		}
	}
	else if(p[0]=='b'){
		for (int i = 0; i<8;i++){
		d[i]=b[i];
		}
	}
	else if(p[0]=='c'){
		for (int i = 0; i<8;i++){
		d[i]=c[i];
		}
	}
	else if(p[neg]=='!'){
		negate:
		neg++;	
		switch(p[neg]){
			case 'a':
				for (int i = 0; i<8;i++){
					if (neg % 2 == 0)
						d[i]=a[i];
					else
						d[i]=!a[i];
				}
				break;
			
			case 'b':
				for (int i = 0; i<8;i++){
					if (neg % 2 == 0)
						d[i]=b[i];
					else
						d[i]=!b[i];
				}
				break;
			
			case 'c':
				for (int i = 0; i<8;i++){
					if (neg % 2 == 0)
						d[i]=c[i];
					else
						d[i]=!c[i];
				}
			break;	
			case '!':
				goto negate ;
		}
		
	}
	
		
	
	for (int i =0;i<l;i++){
						
		switch (p[i]){							
			case '&' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<8;j++){
							d[j] &= a[j] ;
						}
					break;
					
					case 'b':
						for (int j=0;j<8;j++){
							d[j] &= b[j] ;
						}
					break;
					
					case 'c':
						for (int j=0;j<8;j++){
							d[j] &= c[j] ;
						}
					break;
					
					case '!':
						neg = 1;
						and_negation:
							neg++;
						switch(p[i+neg]){
							case 'a':
								for (int j = 0; i<8;j++){
									if (neg % 2 == 0)
										d[j] &= !(a[j]);
									else
										d[j] &= (a[j]);
								}
								break;
							
							case 'b':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] &= !(b[j]);
									else
										d[j] &= (b[j]);
								}
								break;
							
							case 'c':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] &= !(c[j]);
									else
										d[j] &= (c[j]);
								}
							break;
							
							case '!':
								goto and_negation;
							break;	
						}
					break;
				}
			break;
								
			case '|' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<8;j++){
							d[j] |= a[j] ;
						}
					break;
					
					case 'b':
						for (int j=0;j<8;j++){
							d[j] |= b[j] ;
						}
					break;
					
					case 'c':
						for (int j=0;j<8;j++){
							d[j] |= c[j] ;
						}
					break;
					
					case '!':
						neg = 1;
						or_negation:
							neg++;
						switch(p[i+neg]){
							case 'a':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] |= !(a[j]);
									else
										d[j] |= (a[j]);
								}
								break;
							
							case 'b':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] |= !(b[j]);
									else
										d[j] |= (b[j]);
								}
								break;
							
							case 'c':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] |= !(c[j]);
									else
										d[j] |= (c[j]);
								}
							break;
							
							case '!':
								goto or_negation;
							break;	
						}
					break;
				}
			break;
								
			case 'I' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<8;j++){
							d[j] = ((!d[j])||a[j]) ;
						}
					break;
					
					case 'b':
						for (int j=0;j<8;j++){
						d[j] = ((!d[j])||b[j]) ;
						}
					break;
					
					case 'c':
						for (int j=0;j<8;j++){
							d[j] = ((!d[j])||b[j]) ;
						}
					break;
					
					case '!':
						neg = 1;
						imp_negation:
							neg++;
						switch(p[i+neg]){
							case 'a':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] = !((!d[j])||a[j]) ;
									else
										d[j] = ((!d[j])||a[j]) ;
								}
								break;
							
							case 'b':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] = !((!d[j])||b[j]) ;
									else
										d[j] = ((!d[j])||b[j]) ;
								}
								break;
							
							case 'c':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] = !((!d[j])||b[j]) ;
									else
										d[j] = ((!d[j])||b[j]) ;
								}
							break;
							
							case '!':
								goto imp_negation;
							break;	
						}
					break;
				}

			break;
								
			case 'B' :
				switch (p[i+1]){
									
					case 'a':
						for (int j=0;j<8;j++){
							d[j] = (((!d[j])||a[j])&&((!a[j])||d[j])) ;
						}
					break;
					
					case 'b':
						for (int j=0;j<8;j++){
							d[j] = (((!d[j])||b[j])&&((!b[j])||d[j])) ;
						}
					break;
					
					case 'c':
						for (int j=0;j<8;j++){
								d[j] = (((!d[j])||c[j])&&((!c[j])||d[j])) ;
						}
					break;
					
					case '!':
						neg = 1;
						bi_negation:
							neg++;
						switch(p[i+neg]){
							case 'a':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] = !(((!d[j])||a[j])&&((!a[j])||d[j])) ;
									else
									d[j] = (((!d[j])||a[j])&&((!a[j])||d[j])) ;
								}
								break;
							
							case 'b':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] = !(((!d[j])||b[j])&&((!b[j])||d[j])) ;
									else
										d[j] = (((!d[j])||b[j])&&((!b[j])||d[j])) ;
								}
								break;
							
							case 'c':
								for (int j = 0; j<8;j++){
									if (neg % 2 == 0)
										d[j] = !(((!d[j])||c[j])&&((!c[j])||d[j])) ;
									else
										d[j] = (((!d[j])||c[j])&&((!c[j])||d[j])) ;
								}
							break;
							
							case '!':
								goto bi_negation;
							break;	
						}
					break;
				}
	
				
		
			break;
							
			}
		
	}
	

	
	
	
//output	
	cout<<endl<<"INPUT \t\t\t\tOUTPUT"<<endl;
	cout<<"A\tB\tC\t\tD"<<endl;
	for (int i = 0; i<8;i++){
		cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t\t"<<d[i];
		cout<<endl;
		}
				
}
