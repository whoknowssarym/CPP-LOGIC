#include <iostream>
#include <cmath>
using namespace std;


int main(){
 	do{
	 
    	int hnumber , countdigits = 0 , sumdigits = 0;
        cout<<"Enter a number to check whether it is an Armstrong Number or not :"<<endl;
     	cin>>hnumber;
	
	    int temp = hnumber; //Assigning hnumber to temp value 	
	
    	while (temp > 0){
		    temp /= 10;
	    	countdigits ++ ;
	    }
	
    	//  cout<<countdigits<<endl;
	
     	int val = hnumber;
	
	  while (val > 0){
	     int dig = val % 10;
		 sumdigits += pow(dig, countdigits);
		 val /= 10;
	   }
	
	  if (sumdigits ==  hnumber){
		  cout<<"Your Number : " << hnumber << " is an Armstrong Number ." << endl;
	  }else{
	      cout<<"Your Number : " << hnumber << " is Not An Armstrong Number ." << endl;
	  }
    }while(true);
    return 0;
}
