#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solve(vector<int> &nums, int target){
    if(nums[nums.size()-1]<=target) return nums.size();
    return (upper_bound(nums.begin(), nums.end(), target) - nums.begin());
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int size = (cin>>size, size); vector<int> nums(size); for(int i=0; i<size; i++) cin>>nums[i]; sort(nums.begin(), nums.end());
    int t = (cin>>t, t); while(t--){int n = (cin>>n, n); cout<<solve(nums, n)<<'\n';}
}