#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number, whose Palindrome is to be found : "<<endl;
    cin>>num;
    int ld, rev = 0, temp = num;
    while(temp > 0){
        ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    cout<<"The Palindrome of the number "<<num<<" is "<<rev;
    return 0;
}