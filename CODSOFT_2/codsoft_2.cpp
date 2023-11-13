#include <iostream>
using namespace std;
float a,b;
float sum();
float sub();
float mul();
float div();


void menu(){
  cout<<"======opaerations======"<<"\n";
  cout<<"1.sum"<<"\n";
  cout<<"2.difference"<<"\n";
  cout<<"3.product"<<"\n";
  cout<<"4.divide"<<"\n";
  cout<<"5.exit"<<"\n";
  
}



int main() {
	cout<<"enter number1: ";
	cin>>a;
	cout<<"enter number2: ";
	cin>>b;
  int choice;
  do{
    menu();
    cout<<"enter the operation number(1-4): ";
    cin>>choice;
    
    switch(choice){
    	case 1:
    		float sum();
    		cout<<"sum of numbers is: "<<a+b<<"\n";
    		break;
    	case 2:
    		float sub();
    		cout<<"difference of numbers is: "<<a-b<<"\n";
    		break;
    	case 3:
    		float mul();
    		cout<<"product od numbers is: "<<a*b<<"\n";
    		break;
    	case 4:
    		float div();
    		if(b!=0){
    			cout<<"divide of number is: "<<a/b<<"\n";
			}
			else{
				cout<<"error in division"<<"\n";
			}
    		break;
    	case 5:
    		cout<<"exiting";
    		break;
    	default:
    		cout<<"unvalid";
    	
	}

  }while(choice!=5);
  return 0;
  
  
}
