// How to create a hoolow sphere using c++

#include <iostream>
using namespace std;

int main(){
	int n ;
	cout<<"Enter How many rows of hollow sphere you want to print : ";
	cin>>n;
	cout<<endl;
	for(int i = 1 ; i<= n ; i++){
		cout<<"*";
		for(int j = 1 ; j <= n-1 ; j++){
			if (i == 1 || i == n){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"*"<<endl;
	}
	return 0;
	
}

// How to create a inverted and Rotated half pyramid

#include <iostream>
using namespace std;

int main(){
	int n = 4;
	for(int i = 1 ; i <= n ; i++){
		 // for spaces 
		for(int j = 1 ; j <= (n-i) ; j++){
			cout<<" ";
		}
		for (int k = 1 ; k <= i ; k++ ){
			cout<<"*";
		}
		// for stars
		cout<<endl;
	}
	return 0;
}



// How to create a floyd's triangle pattern 

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int num = 1;
	for(int i  = 1 ; i <= n ; i++){
		for(int j  = 1 ; j<=i ; j++){
			cout<< num++; 
		}
		cout<<endl;
	}
	return 0;
}

















 
