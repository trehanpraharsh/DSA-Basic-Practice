//Rotating the vector to the right by 1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    int temp = nums[n - 1];
    for(int i = n; i > 0; i--){
        nums[i] = nums[i - 1];
    }
    nums[0] = temp;
    for(int j = 0; j < nums.size(); j++){
        cout<<nums[j]<<" ";
    }
    
    return 0;
}