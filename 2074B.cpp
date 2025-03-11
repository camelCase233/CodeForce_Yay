#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

typedef long long int ll;

ll solve(vector<int>& nums){
    return (accumulate(nums.begin(), nums.end(), 0) - nums.size()+1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t = (cin>>t, t);
    while(t--){
        int size = (cin>>size, size);
        vector<int> nums(size);
        for(int i =0; i<size; i++){
            cin>>nums[i];
        }
        cout<<solve(nums)<<'\n';
    }
}