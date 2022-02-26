#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums==target){
                return nums[i];
            }
            else {
                return -1;
            }
        }

    }
};

int main(){
Solution myObj;

myObj.search()
}

