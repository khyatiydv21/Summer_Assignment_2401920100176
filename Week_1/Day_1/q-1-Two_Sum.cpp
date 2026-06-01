#include <iostream>
#include<vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
vector<int> two_Sum(vector<int>&nums,int target){
    unordered_map<int,int>mpp;
for(int i=0; i<nums.size(); i++){
  int compliment =target - nums[i];

  if(mpp.find(compliment)!=mpp.end()) return {i,mpp[compliment]};
  mpp[nums[i]] = i;

}
return {};

}; 

int main(){
        vector<int> nums = {2,7,11,15};

        int target = 9;
vector<int> ans = two_Sum(nums, target);

for(int x : ans){
    cout << x << " ";
}
}
