#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    vector<int> digits = {1,2,3};
    long long num = 0;
    int ld;
    int n = digits.size() - 1;
    vector<int>ans;
    vector<int>res;
    for(int i = 0; i<=n; i++){
         num = num + pow(10,(n-i)) * digits[i];
    }
    num++;
    cout<<"The Number then is: "<<num<<endl;
    while(num!=0){
        ld = num % 10;
        ans.push_back(ld);
        num = num / 10;
    }
    for(int k = ans.size() - 1; k >= 0; k--){
        res.push_back(ans[k]);
    }
    for(int l = 0; l<res.size(); l++){
        cout<<res[l]<<",";
    }

    return 0;
}