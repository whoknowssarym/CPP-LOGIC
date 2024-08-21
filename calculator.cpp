//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	char x ;
    int a ;
    int b ;
    char symbol ;
    cout<<"                                        *************************************"<<endl;
    cout<<"                                          Mini Calculator For Basic Purposes "<<endl;
    cout<<"                                        *************************************"<<endl;
    cout<<"Enter You Number for 1st Value Please : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter You Number for 2nd Value Please : ";
    cin>>b;
    cout<<endl;
    cout<<"Enter You Desired Symbol Please : ";
    cin>>symbol;
    cout<<endl;
    switch(symbol){
    	case  '+' : cout<<"Your Result is "<< a + b <<endl;
    	                     break;
        case  '-' : cout<<"Your Result is "<< a - b <<endl;
                             break;
	    case  '*' : cout<<"Your Result is "<< a * b <<endl;
	                         break;
	    case  '/' : cout<<"Your Result is "<< a / b <<endl;
		                     break;
		case  '%' : cout<<"Your Result is "<< a % b <<endl;
		                     break;
	   default : cout<<"Invalid symbol"<<endl;
    }
	return 0;
	
}

