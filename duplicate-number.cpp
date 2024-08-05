#include<iostream>
#include<vector>
using namespace std;

//  find the duplicate number in an array - 

    int findDuplicate(vector<int>& nums) {
        while(nums[0] != nums[nums[0]]){
            swap(nums[0] , nums[nums[0]]);
        }
        return nums[0];
    }
int main()
{
        vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl;
    return 0;
 return 0;
}