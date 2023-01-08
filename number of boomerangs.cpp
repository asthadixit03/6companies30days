#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
    int ans = 0, n = points.size();
    for(int i=0;i<n;i++) {

        unordered_map<int,int>mp;

        for(int j=0;j<n;j++) {
            int x = points[i][0] - points[j][0];
            int y = points[i][1] - points[j][1];
           
            int d = x*x + y*y;

            ans += mp[d]*2;
            mp[d]++;
        }
    }
    return ans;
}
    
};