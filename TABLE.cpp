#include <iostream>
using namespace std;


int main(){
 do{
 
	int n  , res ; 
	cout<<"Enter a number : ";
	cin>>n;
	
	for(int i = 0; i<= 10 ; i++){
		res = i*n;
		cout<<n<<" x "<<i<<" = "<<res<<endl;
		
	}
   }while(true);
	return 0;
}
