//#include <iostream>
//using namespace std;
//
//
//int main(){
//	int i =1;
//	int n;
//	int sum = 0;
//	cout<<"Enter The Number To Where you want to run this loop"<<endl;
//	cin>>n;
//	for (i;i<=n;i++)
//	    cout<<"SARIM IS GREAT !"<<endl;
//	    sum += i;
//    cout<<"sum of N numbers :"<<sum<<endl;
//    cout <<"Total value of i :"<<i<<endl;
// return 0;
//	
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//	int i , j, sum;
//	i = 1;
//	sum = 0;
//	cout<<"Enter Number to print the sum of N number :"<<endl;
//	cin>>j;
//	cout<<endl;
//	for(i ;i <= j ; i++){
//		sum = sum + i;    
//	}
//	cout<<sum<<endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//	int count = 1;
//	while (count <= 5){
//		cout<<count<<endl;
//		count ++;
//	}
//	return 0;


//
//#include <iostream>
//using namespace std;
//
//int main(){
//	int i , j , k ;
//	i = 1;
//	k = 0;
//	cout<<"Enter any number :"<<endl;
//	cin>>j;
//	cout<<endl;
//	while (i <= j){
//		k += i;
//		i++;
//	}
//	cout<<"Sum of N Natural Numbers are :"<<k<<endl;
//	return 0;
//}
//
//
//


//#include <iostream>
//using namespace std;
//
//int main(){
//	int i = 1 ;
//	
//	for(i ; i <= 4 ; i++){
//		cout<<"****"<<endl;
//	}
//	return 0;
//}





//#include <iostream>
//using namespace std;
//
//int main(){
//	
//	int i ;
//	cout<<"Enter Value :"<<endl;
//	cin>>i;
//	cout<<endl;
//	for(i ; i >= 1 ; i--){
//		cout<<i<<endl;
//	} 
//	return 0;
//}
//




//#include <iostream>
//using namespace std;
//
//int main(){
//	int i = 10829;
//	int temp = i;
//	int sum = 0;
//	int dig;
//    while (temp > 0){
//    	dig = temp % 10;
//    	if (dig % 2 == 1){
//         sum += dig;
//     }
//    	temp /= 10; 
//	}
//	cout<<sum<<endl;
//}
//



// print the number in a reverse order 


//#include <iostream>
//using namespace std;
//
//
//int main(){
//	int n ;
//	cout<<"Enter any number : ";
//    cin >> n;
//	while ( n > 0){
//		int lastDig = n % 10;
//		cout<<lastDig;
//		n /= 10;		
//	}
//	return 0;	
//}
//





//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"Enter a number : ";
//	cin>>n;
//	int lastDig , res;
//	cout<<endl;
//	while ( n > 0 ){
//		lastDig = n % 10;
//		res = res * 10 + lastDig;
//		n /= 10;
//	}
//	cout<<"Your Reversed Number is : "<<res<<endl;
//}





//
//#include <iostream>
//using namespace std;
//
//int main(){
//	int a , b;
//	cout<<"Enter  a NUmber : ";
//	cin>>a;
//	b = a;
//	while ( b > 0 ){
//		int temp = b %10;
//		cout<<temp;
//		b = b / 10;
//	}
//	return 0;
//}
//


                                              /* Using Break Statement  */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//	int a;
//	
//	do{
//		cout <<"enter any number : ";
//    	cin>>a;
//		if (a % 10 == 0){
//			break;
//		}
//	    cout<<"You entered  number "<<" "<<a<<endl;
//	}while(true);
//	
//	return 0;
//}

                                    /* Using  COntinue Statmenet */
//#include <iostream>
//using namespace std;
//
//int main(){
//      for(int i = 1;i<=10;i++){
//      	if (i == 5){
//      		continue;
//		  }
//		 cout<<i<<endl;
//	  }
//	 return 0;
//}


      // not showing output of those numbers which are multiple by 10. by using Coninue statement 
#include <iostream>
using namespace std;

int main(){
	int i;
	do{
		cout<<"Enter a number : ";
		cin>>i;
		if(i % 10 == 0){
			continue;
		}
		cout<<"You entered "<<i<<endl;
	}while(true);
	
	return 0;
}















