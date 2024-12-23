#include <iostream>
#include <vector>
using namespace std; 
int find_majority (vector<int>nums, int n){
    int votes = 0, candidate;
    for (int i = 0; i < n; i++){
        if (votes == 0){
            votes = 1; 
            candidate = nums[i];
        }
        else if(candidate == nums[i]){
            votes++;
        }
        else votes--;
    }
    int target = candidate;
    votes = 0;
    for(int i = 0; i < nums.size(); i++){
        if (target == nums[i]){
            votes++;
        }
    }
    if (votes < n / 2) {
        return -1;
    }
    else {
        return candidate;
    }
};
int main ()
{   
    vector<int> nums = {2,3,4,4,5,4,2,4,5,4};
    int n = nums.size();
    int majority1 = find_majority(nums, n);
    cout << "the Mojority element is :" <<  majority1 << endl;
    return 0;
}
