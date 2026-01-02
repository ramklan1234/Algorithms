#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    for(int i =0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target) return {i,j};
        }
    }
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