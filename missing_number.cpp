#include<bits/stdc++.h>

using namespace std;

int missing_number_1(vector<int> &nums){          //Approach number one using bit manipulation
    int missing = nums.size();

    for(int i=0;i<nums.size();i++)
        missing ^= i^nums[i];

return missing;
}


int missing_number_2(vector<int> &nums){                   //Approach number one using Gauss' Formula
    int expected_sum = nums.size()*(nums.size()+1)/2;      //This Approach gave me an .....nvm...its very sexy
    int actual_sum = 0;

    for(int i=0;i<nums.size();i++)
        actual_sum += nums[i];

return expected_sum-actual_sum;
}

int main(){
    vector<int> nums;
    int n,item;
    cin>>n;

    // cout<<"here"<<"\n";

    for(int i;i<n;i++){
        cin>>item;
        nums.push_back(item);

    }

    cout<<missing_number_1(nums)<<"\n";
    cout<<missing_number_2(nums);
    // cout<<"here"<<"\n";
return 0;
}
