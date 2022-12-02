#include <iostream>
#include <vector>
using namespace std;

long long interchangeableRectangles(vector<vector<int>>& rectangles) {
    long long count = 0;
    for(int i = 0; i < rectangles.size(); i++){
        for(int j = i + 1; j < rectangles.size(); j++){
            if(rectangles[i][0] / rectangles[i][1] == rectangles[j][0] / rectangles[j][1]){
                count++;
            }
        }
    }
    return count;
}


int main(){
    vector <int> rect = {{4,8},{3,6},{10,20},{15,30}};
    cout<<interchangeableRectangles(rect)<<endl;

    return 0;
}