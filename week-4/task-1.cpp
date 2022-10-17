#include <iostream>
using namespace std;

int Factorial(int n){

    long long fact =1;
    if (n<=0)
        return 1;
    else {
        return n*Factorial(n-1);
    }
}

int Fibonacci(int n){
    if (n<=1)
        return n;
    else{
       return Fibonacci(n - 1)+Fibonacci(n - 2);

    }
}

int GCD (int n, int m){
    if (n=m) {
        return m;
    }

    else if (n>=m){
        return GCD(n-m,m);
    }
    else return GCD (n,m-n);
}

int linear (int A,int n,int item){

}

int main(){
    int n; cin>>n;

    int fact = Factorial (n);
    cout<<"Factorial : "<<fact<<endl;

    int fibo = Fibonacci(n);
    cout<<"Fibonacci : " <<fibo<<endl;

    int gcd = GCD(n,8);
    cout<<"GCD is "<<gcd;

}
