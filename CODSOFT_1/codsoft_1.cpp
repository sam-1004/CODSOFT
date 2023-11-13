#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main(){
  srand(time(0));
  int randomno=(rand()%100)+1;
  int guessno,attempts=0;
  do{
    cout<<"guess the number: ";
    cin>>guessno;
    attempts++;
    if(guessno==randomno){
      cout<<"correct guess!";
    }
    else if(guessno>randomno){
      cout<<"high"<<"\n";
    }
    else{
      cout<<"low"<<"\n";
    }
    
  }while(guessno!=randomno);
  return 0;   
}
