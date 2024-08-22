// How to check a prime number in programming 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n ; 
	bool isPrime = true;
    cout<<"Enter a number : ";
    cout<<endl;
    cin>>n;
    
    for (int i =2 ; i <= sqrt(n) ; i++){
    	if (n %i ==  0){
    		isPrime = false;
    		break;
		}	
	}    	
	
	if(isPrime == true){
		cout<<"Your Number : "<<n<<" is a prime Number"<<endl;
	}else{
		cout<<"Your Number : "<<n<<" is not a prime Number"<<endl;
	}
  
	return 0;
} 
