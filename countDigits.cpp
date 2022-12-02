#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Number: "<<endl;
    cin>>number;
    int count = 0;
    while(number > 0){
        number = number / 10;
        count++;
    }
    cout<<"The number of digits in "<<number<<" is "<<count<<endl;
    return 0;
}