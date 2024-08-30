// #include <iostream>
// using namespace std;



// int f_get_fact(int n){
//     int fact = 1;
//     for(int i = 1 ; i <= n ; i++){
//         fact = fact * i ;}       
//     return fact;
// }

// int main(){
//     int x ; 
//     cout<<"Enter a number to check its factorial :";
//     cin>>x;
//     if (x == 0){
//         cout<<"Factorial for 0 doesn't exist ";
//     }else{
//     int res = f_get_fact(x);
//     cout<<res;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int f_get_pnum(int num){
    bool isPrime = true;
    int res ; 
    for(int i = 2 ; i<= sqrt(num) ; i++){
    if(num % i == 0){
        isPrime = false;
        break;}
    }
    if (isPrime == true){
        return 1;      
    } else{
        return 0;        
    }
}

int main(){
    int n ; 
    cout<<"Enter a Number to check whether it is a Prime Number Or Not : ";
    
    cin>>n;
    if (n <= 1){
        cout<<"Can't Find Factorial ";
    }
    int result = f_get_pnum(n);
    if (result == 1){
     cout<<"Your Number is Prime Number"<<endl;
    }else{
     cout<<"Your Number is not Prime Number"<<endl;
    }
    return 0;
}