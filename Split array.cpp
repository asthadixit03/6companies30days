#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

bool isPossible(vector<int>& nums) {
        unordered_map<int,int> count, tails;

        for(int &i : nums){ count[i]++;}
    
        for(int &i : nums){
           
            if(!count[i]) continue;
            count[i]--;
          
            if(tails[i-1] > 0){
                tails[i-1]--;
                tails[i]++;
            }
            
            else if(count[i+1] && count[i+2]){
                count[i+1]--;
                count[i+2]--;
                tails[i+2]++;
            }
           
            else 
                return false;
        }
        return true;
}
};