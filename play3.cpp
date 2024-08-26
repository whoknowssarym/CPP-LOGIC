// how to make  diamond shape using for loops in  c++

#include <iostream>
using namespace std;

int main(){
	int n = 4 ;
	
	// 1st pyramid
	for(int i = 1 ; i<= n ; i++){
		// for spaces 
		for(int j = 1; j<= n-i; j++){
			cout<<" ";
		} // we are using int j again cause when upper inner loop will be free it will be deleted from memory and we can assign variable j again
		for(int j = 1 ; j<= 2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	//2nd pyramid
	for (int i = n ; i>= 1 ; i--){
		// for spaces 
		for(int j = 1; j<= n-i ;j++){
			cout<<" ";
		} // we are using int j again cause when upper inner loop will be free it will be deleted from memory and we can assign variable j again
		for(int j = 1 ; j<= 2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}	
	return 0;
}


// how to print butterfly pattern in c++ using for loops 

#include <iostream>
using namespace std;

int main(){
	int n = 4 ; 
	// first half shape 
	for(int i = 1 ; i<= n ; i++){
		// for stars 
		for(int j = 1 ; j<= i ; j++){
			cout<<"*";
		}
		// for spaces 
		for(int j = 1 ;j<= 2*(n-i) ; j++){
			cout<<" ";
		}
	    // for stars 
	    for(int j = 1 ; j<= i ; j++){
	    	cout<<"*";
		}
		cout<<endl; 
	}
	// second  half shape 
	for(int i = n ; i>= 1 ; i--){
			// for stars 
		for(int j = 1 ; j<= i ; j++){
			cout<<"*";
		}
		// for spaces 
		for(int j = 1 ;j<= 2*(n-i) ; j++){
			cout<<" ";
		}
	    // for stars 
	    for(int j = 1 ; j<= i ; j++){
	    	cout<<"*";
		}
		cout<<endl; 
		
	}
	return 0;
}




















