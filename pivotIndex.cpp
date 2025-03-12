#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int> &X, vector<int> &Y){
    int pivot = Y[0];
    auto it = find(X.begin(), X.end(), Y[0]);
    int index = distance(X.begin(), it);
    int i = index; int j = index+1;
    vector<vector<int>> compare;
    while(i != j){
        if(j == X.size()) j = 0;
        vector<int> ans = {abs(pivot - X[j]), X[j]};
        compare.push_back(ans);
        j++;
        
    }
    compare.push_back({0, pivot});
    sort(compare.begin(), compare.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0]; 
    });
    vector<int> result;
    for(const auto& row : compare){
        result.push_back(row[1]);
    }

    if (Y == result) {
        return index + 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> X(size), Y(size); 

        for (int i = 0; i < size; i++) cin >> X[i];
        for (int i = 0; i < size; i++) cin >> Y[i];

        cout << solve(X, Y) << '\n';
    }
    return 0;
}
