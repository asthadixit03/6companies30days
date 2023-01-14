
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int ans = INT_MIN;
vector<int> tempp;

void recur(int i, int t, vector<int> &arr, int temp, vector<int> &answer)
{   
    if((i<0 && t>=0) || t==0)
    {
        if(ans < max(ans,temp))
        {
            for(int j=0; j<12; j++)
                tempp[j]=answer[j];
            
            
            tempp[0]+= t;
        }
        
        ans = max(ans,temp);
        
        return;
    }
    
    else if(i<0)return;
    
    

    if(t>=arr[i])
    {
        answer[i] = arr[i]+1;
        
        recur(i-1, (t-arr[i]-1), arr, temp+i, answer);
        answer[i]=0;
    }
    
    
    recur(i-1, t, arr, temp, answer);
}

vector<int> maximumBobPoints(int t, vector<int>& arr) 
{
    tempp.resize(12, 0);
    vector<int> answer(12, 0);
    recur(11,t,arr,0, answer);
    
    return tempp;
}
};