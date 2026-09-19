#include <bits/stdc++.h>
using namespace std;

/*class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
  unordered_set<int>set;
  for(int i  = 0;i<nums.size();i++){
    if(set.count(nums[i]))
    return true;
    set.insert(nums[i]);

    if(set.size()>k)
    set.erase(nums[i-k]);
  }
  return false;

    }  
  };*/
        
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
  unordered_set<int>set;
  for(int i = 0; i< min(k,(int)nums.size()); i++){
    if(set.count(nums[i])){
    return true;
    }
    set.insert(nums[i]);
  }
  for(int i = k ;i<nums.size(); i++){
    if(set.count(nums[i])){
    return true;
    }
    set.insert(nums[i]);
    set.erase(nums[i-k]);

}
return false;
}
};