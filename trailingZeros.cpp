#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int temp = num, count2 = 0, count5 = 0;
    while(temp % 2 == 0){
        count2++;
        temp = temp / 2;
    }
    while(temp % 5 == 0){
        count5++;
        temp = temp / 5;
    }
    int ans = min(count2,count5);
    cout<<"The number of trailing Zeroes in "<<num<<" is "<<ans<<endl;
    return 0;
}