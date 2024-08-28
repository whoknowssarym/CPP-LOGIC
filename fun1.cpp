// Printing Sum Function

// #include <iostream>
// using namespace std;


// int f_sum(int a , int b){
//     int sum = a + b ;
// 	return sum;
// }


// int main(){
// 	int a , b;
// 	cout<<"Enter a value for a : ";
// 	cin >> a;
// 	cout<<endl;
// 	cout<<"Enter a value for b : "; 
// 	cin >> b;
// 	int s = f_sum(a,b);
// 	cout<<"Your result is : "<<s<<endl;
// 	return 0;
// }


// Printing Product Function

// #include <iostream>
// using namespace std;

// int f_mul(int a , int b){
// 	int res = a * b ;
// 	cout<<endl;
// 	return res;
// }


// int main(){
// 	int a , b;
// 	cout<<"Enter Value for a : ";
// 	cin>>a;
// 	cout<<"Enter Value for b : ";
// 	cin>>b;
//     int result = f_mul(a,b);
//     cout<<result;

// 	return 0;
// }

// Write a function to print if a number is even or odd

// #include <iostream>
// using namespace std;


// int f_ev_odd(int ans){
// 	if (ans % 2 ==  0){
// 		return 0;
// 	}else{
// 		return 1;
// 	}
// }

// int main(){
// 	int a ; 
// 	cout<<"Enter a Number to Check Whether it is Even Or ODD :";
// 	cin>>a;
// 	cout<<endl;
// 	int res = f_ev_odd(a);
// 	if (res == 0){
// 		cout<<"Your Number is Even"<<endl;
// 	}else{
// 		cout<<"Your Number is ODD"<<endl;
// 	}
// 	return 0;
// }



// Write A Function to print Factorial of number  n


#include <iostream>
using namespace std;



int f_fact(int fact){
	int result = 1;
	if (fact < 0 ){
		cout<<"Factorial of Negative Number is not Possible :";
	}else{
		for (int i = 1 ;  i <=fact ;i++){
			result = result  * i;
		}
	}
	return result;
}

int main(){
	int a , res;
    cout<<"Enter A Number to find its factorial :";
	cin>>a;
	res = f_fact(a);
	cout<<res;
	return 0;
}