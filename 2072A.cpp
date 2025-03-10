#include <iostream>
typedef long long int ll;
using namespace std;
 
ll solve(ll n, ll k, ll i){
    if((abs(k)/i)>n) return -1;
     if(abs(k)%i == 0) return (abs(k)/i);
    else{
        if((abs(k)/i)+1<=n) return ((abs(k)/i)+1);
        else return -1;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t; while(t--){ll n; ll k; ll i; cin>>n>>k>>i; cout<<solve(n,k,i)<<'\n';}
}