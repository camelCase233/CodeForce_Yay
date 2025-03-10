#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int>& nums, int k){
    int mx = *max_element(nums.begin(), nums.end());
    cout<<mx<<'\n';
    vector<int> count(mx+1, 0);
    vector<bool> done(mx+1, false);
    for(int i =0; i<nums.size(); i++){
        ++count[nums[i]];
    }
    int score = 0;
    for(int i =0; i<min(k, mx); i++){
        if(done[i]) continue;
        if(i == k-i){
          score += count[i]/2;
          done[i] = true;
        }
        else if(k-i<=mx){
            score+= min(count[i], count[k-i]);
            done[i] = done[k-i] = true;
        }
    }
    return score;
}

int main(){
    int t; cin>>t;
    while(t--){
        int size, k; cin>>size>>k; vector<int> nums(size);
        for(int i =0; i<size; i++){
             cin>>nums[i];
        }
       int ans = solve(nums, k);
       cout<<ans<<'\n';
}}
