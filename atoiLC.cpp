#include <iostream>
using namespace std;
int myAtoi(string s) {
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 45 || (s[i] >= 48 && s[i] <=57)){
            ans += s[i];
        }
    }
    int res = 0;
    int sign = 1;
    int j = 0;
    if(ans[0] == '-'){
        sign = -1;
        j++;
    }
    for(; j < ans.length(); j++){
        res = res * 10 + (ans[j] - '0');
    }
    return sign * res;
}

int main() {
    string str = "Words are just to distract you from -123455";
    cout<<"The number is : "<<myAtoi(str)<<endl;
    return 0;
}