// test 1 

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<= n ; i++){
    	for(int j = 1 ; j<= i ; j++){
    		if (j%2 == 1){
    			cout<<1;
			}else{
			cout<<0;}
		}
		cout<<endl;
	}
	return 0;
}

// test 2:

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i = 1 ; i<=n ;i++){
		// for sapces 
		for(int j = 1 ; j<= n-i ; j++){
			cout<<" ";
		}
		// for stars 
		for(int j = 1 ; j<=n ;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

// test 3:      PALINDROME LOGIC 

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i = 1 ; i<= n ; i++){
		//  for spaces 
		for(int j = 1 ; j<= n-i ; j++){
			cout<<" ";
		}
		// for numbers  backward 
		for(int k = i ; k>=1 ; k--){
			cout<<k;
			
		}
		// for numbers forward
		for(int l = 2 ; l<=i ; l++){
			cout<<l;
		}
		cout<<endl;
		
	}
	return 0;
}
















