// This file will contain last logic I will learn for C++ && Some Prattice Question Will be Solved Here Also ..


#include <iostream>
using namespace std;

int f_get_fact(int n){
    int fact = 1;
    for(int i = 1 ; i<= n ; i++){
        fact *= i;
    }
    return fact;
}  // factorial funtion completed successfully 

int binCoeff(int n , int r){
    int val1 = f_get_fact(n);
    int val2 = f_get_fact(r);
    int val3 = f_get_fact(n-r);

    int res = val1 / (val2 * val3);

    return res;

}


int main(){
    int result = binCoeff(4 , 2);
    cout<<result<<endl;
    return 0;
}

// Successfully Completed My Creation of Function of Binomial Coefficient ....



// Funtion Overloading in C++

// function overloading is like A Function having same name but different parameters The parameters can be of different types or number of paramters can be different 


#include <iostream>
using namespace std;

int sum(int a , int b){
    return a + b;
}

double sum(double a , double b){
    return a + b;
}


int main(){
    cout<<"For Int : "<<sum(4,6);
    cout<<endl;
    cout<<"For Double : "<<sum(4.5 , 6.5);
}




// Wrie a Program To create a function which will print prime numbers from 2 to n 

#include <iostream>
using namespace std;


bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i = 2 ; i*i <= n ; i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}

void allPrimes(int n){
    for(int i = 2 ; i<= n ;i++){
        if (isPrime(i)){
            cout<< i << " ";
        }
    }
    cout<<endl;
}

int main(){
    allPrimes(13);
    return 0;
}


// Now I will Solve SOme Practice Questions 



// Q -> 1 Write A function to print sum of numbers 



#include <iostream>
using namespace std;


int f_get_sum(int a  , int b){
    return a + b;
}

int main(){
    int res = f_get_sum(2,2);
    cout<<res;
    return 0;
}

// Q -> 2 Write a function which takes 2 numbers as parameters (a & b) and  outputs : a^2 + b^2 + 2*ab

#include <iostream>
using namespace std;

int f_get_formula(int a , int b){
    return (a * a) + (b * b) + 2*a*b;
}

int main(){
    int res = f_get_formula(2,5);
    cout<<res;
    return 0;
}



// Q -> 3   Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

void  f_get_l_3(int a , int b , int c){
    if (a > b && a > c){
        cout<<"A is greater tha b and c";
    }else if(b > a && b> c){
        cout<<"B is greater tha a and c";
    }else if(c > a && c > b){
        cout<<"C is greater tha a and b";
    } 
}


int main(){
    int a , b , c;
    cout<<"Value For A : " ;
    cin>>a;
    cout<<endl;
    cout<<"Value For B : " ;
    cin>>b;
    cout<<endl;
    cout<<"Value For C : " ;
    cin>>c;
    cout<<endl;
    f_get_l_3(a , b , c);
}


// Q -> 3  Write a function that accepts a character (ch) as parameters & returns 
//         the character that occurs after ch in the English alphabet.  Eg : input = ‘c’, return value = ‘d’  Note : for ch = ‘z’, return ‘a’.

#include <iostream>
using namespace std;
 
char f_get_incr(char alpha){
    if (alpha == 'z'){
        return 'a';
    }
    return alpha + 1;
}

int main(){
    char z;
    cout<<"Enter a character ";
    cin>>z;
    char res = f_get_incr(z);
    cout<<res;
    return 0;
}


// Q -> 5  Write a function to check if a number is a palindrome in C++.  (121 is a palindrome, 321 is not) 
/* A number is called a palindrome if the number is equal to the reverse of a number. 
  Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321 
  is not a palindrome because the reverse of 321 is 123, which is not equal to 321. */


#include <iostream>
using namespace std;

int f_get_palindrome(int n){
    int temp = n;
    int temp1 , reverse = 0 ; 
    while (temp > 0 ){   // n = 231
            temp1 = temp % 10;
            reverse = reverse * 10 + temp1;
            temp /= 10;
            
            
    }
    if (reverse == n ){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n ; 
    int res ; 
    cout<<"Enter A Number to check Whether it is a Palindrome or not ";
    cin>>n;
    res = f_get_palindrome(n);
    if (res == 1){
        cout<<"Your Number is Palindrome";
    }else{
        cout<<"Note a Palindrome ";
    }
    return 0;
}