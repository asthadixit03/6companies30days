#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       
        int ans= INT_MAX;

        unordered_map<int,int> m;
        
        for (int i=0; i<cards.size(); i++){
            
            if (m.find(cards[i]) != m.end()){
                
                ans= min(ans,i-m[cards[i]]+1);
            }
            m[cards[i]]= i;
        }
        if (ans==INT_MAX)
            return -1;
        
        return ans;
    }
};