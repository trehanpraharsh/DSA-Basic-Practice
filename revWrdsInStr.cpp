#include <iostream>
#include <vector>
using namespace std;

string reverseWords(string s) {
        int low = 0;
        string str = "";
        vector<string> ans;
        while(low != s.length() - 1){
            while(s[low] != ' ' && low < s.length()){
                str+=s[low];
                low++;
            }
            ans.push_back(str);
            str = "";
            low++;
        }
        str = "";
        for(int i = 0; i < ans.size(); i++){
            str+=ans[i];
            if(i!= ans.size()){
                str+=" ";
            }
        }
        return str;
    }


int main(){
    string mainStr = "the sky is blue";
    cout<<reverseWords(mainStr)<<endl;
    return 0;
}