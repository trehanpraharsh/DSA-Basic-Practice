#include <iostream>
using namespace std;
int gcd(int a, int b);

int main(){
    int a,b;
    cout<<"Enter the numbers to find the GCD of: "<<endl;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}

int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a = a - b;
        }
        else if(b>a){
            b = b - a;
        }
    }
    return a;
}