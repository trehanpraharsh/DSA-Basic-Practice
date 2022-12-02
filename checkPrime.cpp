#include <iostream>
using namespace std;
bool checkPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    checkPrime(n) ? cout<<"It is a Prime Number"<<endl : cout<<"It is not a Prime Number"<<endl;
    return 0;
}