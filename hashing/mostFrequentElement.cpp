/*striver sheet question 
Given an array nums of n integers, find the most frequent element in it i.e., the element 
that occurs the maximum number of times. If there are multiple elements that appear a maximum
 number of times, find the smallest of them.
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int hash[100] = {0};

        // Count frequency
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        int highest = 0;
        int h_num = nums[0];

        // Find the most frequent element
        for (int i = 0; i < nums.size(); i++) {
            if (hash[nums[i]] > highest) {
                highest = hash[nums[i]];
                h_num = nums[i];
            }
        }

        return h_num;
    }
};

