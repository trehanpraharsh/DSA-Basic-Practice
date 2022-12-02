#include <iostream>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    if(s.length() == 0){
        cout<<"It is not a Palindrome"<<endl;
    }
    string mainStr = "";
    for(int i = 0; i<s.length(); i++){
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
            if(s[i] >= 65 && s[i] <= 90){
                s[i] += 32;
            }
            mainStr += s[i]; 
        }
    }
    cout<<"The main string is :"<<mainStr<<endl;
    int low = 0;
    int high = mainStr.length() - 1;
    while(low<high){
        if(mainStr[low] != mainStr[high]){
            cout<<"It is not a Palindrome"<<endl;
        }
        low++;
        high--;   
    }
    cout<<"It is a Palindrome"<<endl;
    return 0;
}