#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    int a, b;
    cout<<"Enter the numbers whose LCM is to be found: "<<endl;
    cin>>a>>b;
    cout<<"The LCM of the numbers is : "<<(a * b) / gcd(a, b)<<endl;
    return 0;
}