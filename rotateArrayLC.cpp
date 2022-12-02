#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k;
    cout<<"The value of K:- "<<endl;
    cin>>k;
    while(k > nums.size()){
        k = k - nums.size();
    }
    vector<int> ans;
    for(int i = nums.size() - k ; i < nums.size() ; i++){
        ans.push_back(nums[i]);
    }
    for(int i = nums.size() - 1; i >= k; i--){
        nums[i] = nums[i - k];
    }
    for(int i = 0; i < ans.size(); i++){
        nums[i] = ans[i];
    }
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}