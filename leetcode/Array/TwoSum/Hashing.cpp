#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i) {
                return {i, hash[complement]};
            }
        }
        // If no valid pair is found, return an empty vector
        return {};
    }

int main(){
    vector<int> sums = vector<int>();
    int number;
    cin>> number;
    int new_mem;
    for (int i = 0;i<number;i++){
        cin>> new_mem;
        sums.push_back(new_mem);
    }
    int target;
    cin>>target;
    vector<int> result = twoSum(sums,target);
    for(int a:result) cout<< a<<endl;
    return 0;
}