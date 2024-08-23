// for box pattern
#include <iostream>
using namespace std;

int main(){
	for(int i = 1 ; i<=4  ; i++){   
		 for(int j  = 1 ; j<= 4 ; j++){	
		     cout<<i<<" ";
		     //cout<<j<<" ";
		}
	 cout<<endl;
	}
    
	return 0;
}


// for stars pattern increasing
#include <iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i = 1 ; i<=n ; i++){
		for(int j = 1 ; j<=i ; j++){
			cout<<"*"<<" ";			
		}
		cout<<endl;
	}
	return 0;
}



// for stars pattern decreasing (INverting)
#include <iostream>
using namespace std;

int main(){
	int n = 1 ; 
	for(int i = 10 ; i >= n ; i--){
		for(int j = 1 ; j<=i ; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}



// for half pyramid pattern
#include <iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i = 1 ; i<=n ; i++){
		for(int j = 1 ; j<=i ; j++){
			cout<<j<<" ";			
		}
		cout<<endl;
	}
	return 0;
}

// for half pyramid pattern character version increasing 
#include <iostream>
using namespace std;

int main(){
	int n = 5;
	char element = 'A';
	for(int i = 1 ; i<=n ; i++){
		for(int j = 1 ; j<=i ; j++){
			cout<<element<<" ";
			element++;			
		}
		
		cout<<endl;
	}
	return 0;
}













