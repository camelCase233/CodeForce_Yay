#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& nums){
    if(nums.size() == 1 || nums.size() == 2) return true;
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] == 1 && nums[i + 1] == 0){
            if(i + 2 < nums.size() && nums[i + 2] == 1) return false;
        }
    }
    return true;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        if(n<3) continue;
        vector<int> nums(n - 2);
        
        for(int i = 0; i < (n - 2); i++) 
            cin >> nums[i];
        
        if(isValid(nums)) 
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }
}