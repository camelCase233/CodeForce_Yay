
#include <iostream>
#include <vector>
using namespace std;
 
int fabio_ness(vector<int>& nums){
    int a = nums[0]+nums[1];
    int b = nums[2]-nums[1];
    int c = nums[3]-nums[2];
    
    if(a == b && a == c){
        return 3;
    }
    if(a != b && b!= c && a != c){
        return 1;
    }
    return 2;
}
 
int main(){
    int t; cin>>t;
    while(t--){
        vector<int> nums(4);
        for(int i=0; i<4; i++){
            cin>>nums[i];
        }
        cout<<fabio_ness(nums);
        cout<<'\n';
    }
    return 0;
}