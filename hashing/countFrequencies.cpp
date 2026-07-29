/*Given an array nums of size n which may contain duplicate elements.
return a list of pairs where each pair contains a unique element from the array and its
 frequency in the array.*/

#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
          int hash[100] = {0};
             for(int i =0;i<nums.size();i++){
                hash[nums[i]]= hash[nums[i]]+1;
             }
             vector<vector<int>>ans;
             for(int i=0;i<nums.size();i++){
                if(hash[nums[i]]!=0){
                    ans.push_back({nums[i],hash[nums[i]]});
                    hash[nums[i]]=0;
                }
           
             }

             return ans;
        
    }
};